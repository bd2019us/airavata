<?php
namespace Airavata\Model\Group;

/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;


final class ResourceType {
  const PROJECT = 0;
  const EXPERIMENT = 1;
  const DATA = 2;
  const APPLICATION_DEPLOYMENT = 3;
  const GROUP_RESOURCE_PROFILE = 4;
  const CREDENTIAL_TOKEN = 5;
  const OTHER = 6;
  static public $__names = array(
    0 => 'PROJECT',
    1 => 'EXPERIMENT',
    2 => 'DATA',
    3 => 'APPLICATION_DEPLOYMENT',
    4 => 'GROUP_RESOURCE_PROFILE',
    5 => 'CREDENTIAL_TOKEN',
    6 => 'OTHER',
  );
}

final class ResourcePermissionType {
  const WRITE = 0;
  const READ = 1;
  const OWNER = 2;
  static public $__names = array(
    0 => 'WRITE',
    1 => 'READ',
    2 => 'OWNER',
  );
}

class GroupModel {
  static $_TSPEC;

  /**
   * @var string
   */
  public $id = null;
  /**
   * @var string
   */
  public $name = null;
  /**
   * @var string
   */
  public $ownerId = null;
  /**
   * @var string
   */
  public $description = null;
  /**
   * @var string[]
   */
  public $members = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'id',
          'type' => TType::STRING,
          ),
        2 => array(
          'var' => 'name',
          'type' => TType::STRING,
          ),
        3 => array(
          'var' => 'ownerId',
          'type' => TType::STRING,
          ),
        4 => array(
          'var' => 'description',
          'type' => TType::STRING,
          ),
        5 => array(
          'var' => 'members',
          'type' => TType::LST,
          'etype' => TType::STRING,
          'elem' => array(
            'type' => TType::STRING,
            ),
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['id'])) {
        $this->id = $vals['id'];
      }
      if (isset($vals['name'])) {
        $this->name = $vals['name'];
      }
      if (isset($vals['ownerId'])) {
        $this->ownerId = $vals['ownerId'];
      }
      if (isset($vals['description'])) {
        $this->description = $vals['description'];
      }
      if (isset($vals['members'])) {
        $this->members = $vals['members'];
      }
    }
  }

  public function getName() {
    return 'GroupModel';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->id);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->name);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->ownerId);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 4:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->description);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 5:
          if ($ftype == TType::LST) {
            $this->members = array();
            $_size0 = 0;
            $_etype3 = 0;
            $xfer += $input->readListBegin($_etype3, $_size0);
            for ($_i4 = 0; $_i4 < $_size0; ++$_i4)
            {
              $elem5 = null;
              $xfer += $input->readString($elem5);
              $this->members []= $elem5;
            }
            $xfer += $input->readListEnd();
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('GroupModel');
    if ($this->id !== null) {
      $xfer += $output->writeFieldBegin('id', TType::STRING, 1);
      $xfer += $output->writeString($this->id);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->name !== null) {
      $xfer += $output->writeFieldBegin('name', TType::STRING, 2);
      $xfer += $output->writeString($this->name);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->ownerId !== null) {
      $xfer += $output->writeFieldBegin('ownerId', TType::STRING, 3);
      $xfer += $output->writeString($this->ownerId);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->description !== null) {
      $xfer += $output->writeFieldBegin('description', TType::STRING, 4);
      $xfer += $output->writeString($this->description);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->members !== null) {
      if (!is_array($this->members)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('members', TType::LST, 5);
      {
        $output->writeListBegin(TType::STRING, count($this->members));
        {
          foreach ($this->members as $iter6)
          {
            $xfer += $output->writeString($iter6);
          }
        }
        $output->writeListEnd();
      }
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}


