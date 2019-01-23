/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

package org.apache.airavata.registry.core.utils;

import org.apache.airavata.common.exception.ApplicationSettingsException;
import org.apache.airavata.common.utils.JDBCConfig;
import org.apache.airavata.common.utils.ServerSettings;

public class AppCatalogJDBCConfig implements JDBCConfig {
    private static final String APPCATALOG_JDBC_DRIVER = "appcatalog.jdbc.driver";
    private static final String APPCATALOG_JDBC_URL = "appcatalog.jdbc.url";
    private static final String APPCATALOG_JDBC_USER = "appcatalog.jdbc.user";
    private static final String APPCATALOG_JDBC_PWD = "appcatalog.jdbc.password";

    @Override
    public String getURL() {
        return readServerProperties(APPCATALOG_JDBC_URL);
    }

    @Override
    public String getDriver() {
        return readServerProperties(APPCATALOG_JDBC_DRIVER);
    }

    @Override
    public String getUser() {
        return readServerProperties(APPCATALOG_JDBC_USER);
    }

    @Override
    public String getPassword() {
        return readServerProperties(APPCATALOG_JDBC_PWD);
    }

    private String readServerProperties(String propertyName) {
        try {
            return ServerSettings.getSetting(propertyName);
        } catch (ApplicationSettingsException e) {
            throw new RuntimeException("Unable to read airavata-server.properties...", e);
        }
    }
}
