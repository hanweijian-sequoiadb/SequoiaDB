/*******************************************************************************


   Copyright (C) 2011-2014 SequoiaDB Ltd.

   This program is free software: you can redistribute it and/or modify
   it under the term of the GNU Affero General Public License, version 3,
   as published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warrenty of
   MARCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program. If not, see <http://www.gnu.org/license/>.

   Source File Name = msgDef.h

   Descriptive Name = Message Defines Header

   When/how to use: this program may be used on binary and text-formatted
   versions of msg component. This file contains definition for global keywords
   that used in client/server communication.

   Dependencies: N/A

   Restrictions: N/A

   Change Activity:
   defect Date        Who Description
   ====== =========== === ==============================================
          09/14/2012  TW  Initial Draft

   Last Changed =

*******************************************************************************/
#ifndef MSGDEF_H__
#define MSGDEF_H__

#define SYS_PREFIX                           "SYS"

#define FIELD_NAME_ROLE                      "Role"
#define FIELD_NAME_HOST                      "HostName"
#define FIELD_NAME_SERVICE                   "Service"
#define FIELD_NAME_NODE_NAME                 "NodeName"
#define FIELD_NAME_SERVICE_TYPE              "Type"
#define FIELD_NAME_SERVICE_NAME              "ServiceName"
#define FIELD_NAME_NAME                      "Name"
#define FIELD_NAME_GROUPID                   "GroupID"
#define FIELD_NAME_GROUPNAME                 "GroupName"
#define FIELD_NAME_DOMAIN                    "Domain"
#define FIELD_NAME_NODEID                    "NodeID"
#define FIELD_NAME_IS_PRIMARY                "IsPrimary"
#define FIELD_NAME_CURRENT_LSN               "CurrentLSN"
#define FIELD_NAME_BEGIN_LSN                 "BeginLSN"
#define FIELD_NAME_COMMIT_LSN                "CommittedLSN"
#define FIELD_NAME_COMPLETE_LSN              "CompleteLSN"
#define FIELD_NAME_LSN_QUE_SIZE              "LSNQueSize"
#define FIELD_NAME_LSN_OFFSET                "Offset"
#define FIELD_NAME_LSN_VERSION               "Version"
#define FIELD_NAME_TRANS_INFO                "TransInfo"
#define FIELD_NAME_TOTAL_COUNT               "TotalCount"
#define FIELD_NAME_SERVICE_STATUS            "ServiceStatus"
#define FIELD_NAME_GROUP                     "Group"
#define FIELD_NAME_GROUPS                    "Groups"
#define FIELD_NAME_VERSION                   "Version"
#define FIELD_NAME_SECRETID                  "SecretID"
#define FIELD_NAME_EDITION                   "Edition"
#define FIELD_NAME_W                         "ReplSize"
#define FIELD_NAME_PRIMARY                   "PrimaryNode"
#define FIELD_NAME_GROUP_STATUS              "Status"
#define FIELD_NAME_DATA_STATUS               "DataStatus"
#define FIELD_NAME_SYNC_CONTROL              "SyncControl"
#define FIELD_NAME_PAGE_SIZE                 "PageSize"
#define FIELD_NAME_LOB_PAGE_SIZE             "LobPageSize"
#define FIELD_NAME_MAX_CAPACITY_SIZE         "MaxCapacitySize"
#define FIELD_NAME_MAX_DATA_CAP_SIZE         "MaxDataCapSize"
#define FIELD_NAME_MAX_INDEX_CAP_SIZE        "MaxIndexCapSize"
#define FIELD_NAME_MAX_LOB_CAP_SIZE          "MaxLobCapSize"
#define FIELD_NAME_TOTAL_SIZE                "TotalSize"
#define FIELD_NAME_FREE_SIZE                 "FreeSize"
#define FIELD_NAME_TOTAL_DATA_SIZE           "TotalDataSize"
#define FIELD_NAME_TOTAL_IDX_SIZE            "TotalIndexSize"
#define FIELD_NAME_TOTAL_LOB_SIZE            "TotalLobSize"
#define FIELD_NAME_FREE_DATA_SIZE            "FreeDataSize"
#define FIELD_NAME_FREE_IDX_SIZE             "FreeIndexSize"
#define FIELD_NAME_FREE_LOB_SIZE             "FreeLobSize"
#define FIELD_NAME_COLLECTION                "Collection"
#define FIELD_NAME_COLLECTIONSPACE           "CollectionSpace"
#define FIELD_NAME_CATALOGINFO               "CataInfo"
#define FIELD_NAME_SHARDINGKEY               "ShardingKey"
#define FIELD_NAME_COMPRESSED                "Compressed"
#define FIELD_NAME_COMPRESSIONTYPE           "CompressionType"
#define FIELD_NAME_STRICTDATAMODE            "StrictDataMode"
#define FIELD_NAME_COMPRESSIONTYPE_DESC      "CompressionTypeDesc"
#define VALUE_NAME_SNAPPY                    "snappy"
#define VALUE_NAME_LZW                       "lzw"
#define VALUE_NAME_LZ4                       "lz4"
#define VALUE_NAME_ZLIB                      "zlib"
#define VALUE_NAME_DATABASE                  "database"
#define VALUE_NAME_SESSIONS                  "sessions"
#define VALUE_NAME_SESSIONS_CURRENT          "sessions current"
#define VALUE_NAME_HEALTH                    "health"
#define VALUE_NAME_ALL                       "all"
#define FIELD_NAME_ISMAINCL                  "IsMainCL"
#define FIELD_NAME_MAINCLNAME                "MainCLName"
#define FIELD_NAME_SUBCLNAME                 "SubCLName"
#define FIELD_NAME_SUBOBJSNUM                "SubObjsNum"
#define FIELD_NAME_SUBOBJSSIZE               "SubObjsSize"
#define FIELD_NAME_ENSURE_SHDINDEX           "EnsureShardingIndex"
#define FIELD_NAME_SHARDTYPE                 "ShardingType"
#define FIELD_NAME_SHARDTYPE_RANGE           "range"
#define FIELD_NAME_SHARDTYPE_HASH            "hash"
#define FIELD_NAME_PARTITION                 "Partition"
#define FIELD_NAME_MAJOR                     "Major"
#define FIELD_NAME_MINOR                     "Minor"
#define FIELD_NAME_FIX                       "Fix"
#define FIELD_NAME_RELEASE                   "Release"
#define FIELD_NAME_BUILD                     "Build"
#define FIELD_NAME_SESSIONID                 "SessionID"
#define FIELD_NAME_TID                       "TID"
#define FIELD_NAME_CONTEXTS                  "Contexts"
#define FIELD_NAME_CONTEXTID                 "ContextID"
#define FIELD_NAME_DATAREAD                  "DataRead"
#define FIELD_NAME_INDEXREAD                 "IndexRead"
#define FIELD_NAME_QUERYTIMESPENT            "QueryTimeSpent"
#define FIELD_NAME_STARTTIMESTAMP            "StartTimestamp"
#define FIELD_NAME_TOTALNUMCONNECTS          "TotalNumConnects"
#define FIELD_NAME_TOTALDATAREAD             "TotalDataRead"
#define FIELD_NAME_TOTALINDEXREAD            "TotalIndexRead"
#define FIELD_NAME_TOTALDATAWRITE            "TotalDataWrite"
#define FIELD_NAME_TOTALINDEXWRITE           "TotalIndexWrite"
#define FIELD_NAME_TOTALUPDATE               "TotalUpdate"
#define FIELD_NAME_TOTALDELETE               "TotalDelete"
#define FIELD_NAME_TOTALINSERT               "TotalInsert"
#define FIELD_NAME_TOTALSELECT               "TotalSelect"
#define FIELD_NAME_TOTALREAD                 "TotalRead"
#define FIELD_NAME_TOTALREADTIME             "TotalReadTime"
#define FIELD_NAME_TOTALWRITETIME            "TotalWriteTime"
#define FIELD_NAME_READTIMESPENT             "ReadTimeSpent"
#define FIELD_NAME_WRITETIMESPENT            "WriteTimeSpent"
#define FIELD_NAME_LASTOPBEGIN               "LastOpBegin"
#define FIELD_NAME_LASTOPEND                 "LastOpEnd"
#define FIELD_NAME_LASTOPTYPE                "LastOpType"
#define FIELD_NAME_LASTOPINFO                "LastOpInfo"
#define FIELD_NAME_TOTALMAPPED               "TotalMapped"
#define FIELD_NAME_REPLINSERT                "ReplInsert"
#define FIELD_NAME_REPLUPDATE                "ReplUpdate"
#define FIELD_NAME_REPLDELETE                "ReplDelete"
#define FIELD_NAME_ACTIVETIMESTAMP           "ActivateTimestamp"
#define FIELD_NAME_RESETTIMESTAMP            "ResetTimestamp"
#define FIELD_NAME_USERCPU                   "UserCPU"
#define FIELD_NAME_SYSCPU                    "SysCPU"
#define FIELD_NAME_CONNECTTIMESTAMP          "ConnectTimestamp"
#define FIELD_NAME_USER                      "User"
#define FIELD_NAME_SYS                       "Sys"
#define FIELD_NAME_IDLE                      "Idle"
#define FIELD_NAME_OTHER                     "Other"
#define FIELD_NAME_CPU                       "CPU"
#define FIELD_NAME_LOADPERCENT               "LoadPercent"
#define FIELD_NAME_TOTALRAM                  "TotalRAM"
#define FIELD_NAME_FREERAM                   "FreeRAM"
#define FIELD_NAME_TOTALSWAP                 "TotalSwap"
#define FIELD_NAME_FREESWAP                  "FreeSwap"
#define FIELD_NAME_TOTALVIRTUAL              "TotalVirtual"
#define FIELD_NAME_FREEVIRTUAL               "FreeVirtual"
#define FIELD_NAME_MEMORY                    "Memory"
#define FIELD_NAME_RSSSIZE                   "RssSize"
#define FIELD_NAME_LOADPERCENTVM             "LoadPercentVM"
#define FIELD_NAME_VMLIMIT                   "VMLimit"
#define FIELD_NAME_VMSIZE                    "VMSize"
#define FIELD_NAME_CORESZ                    "CoreFileSize"
#define FIELD_NAME_VM                        "VirtualMemory"
#define FIELD_NAME_OPENFL                    "OpenFiles"
#define FIELD_NAME_NPROC                     "NumProc"
#define FIELD_NAME_FILESZ                    "FileSize"
#define FIELD_NAME_ULIMIT                    "Ulimit"
#define FIELD_NAME_OOM                       "SDB_OOM"
#define FIELD_NAME_NOSPC                     "SDB_NOSPC"
#define FIELD_NAME_TOOMANY_OF                "SDB_TOO_MANY_OPEN_FD"
#define FIELD_NAME_ERRNUM                    "ErrNum"
#define FIELD_NAME_TOTALNUM                  "TotalNum"
#define FIELD_NAME_FREENUM                   "FreeNum"
#define FIELD_NAME_FILEDESP                  "FileDesp"
#define FIELD_NAME_ABNORMALHST               "AbnormalHistory"
#define FIELD_NAME_STARTHST                  "StartHistory"
#define FIELD_NAME_DIFFLSNPRIMARY            "DiffLSNWithPrimary"
#define FIELD_NAME_DATABASEPATH              "DatabasePath"
#define FIELD_NAME_TOTALSPACE                "TotalSpace"
#define FIELD_NAME_FREESPACE                 "FreeSpace"
#define FIELD_NAME_DISK                      "Disk"
#define FIELD_NAME_CURRENTACTIVESESSIONS     "CurrentActiveSessions"
#define FIELD_NAME_CURRENTIDLESESSIONS       "CurrentIdleSessions"
#define FIELD_NAME_CURRENTSYSTEMSESSIONS     "CurrentSystemSessions"
#define FIELD_NAME_CURRENTCONTEXTS           "CurrentContexts"
#define FIELD_NAME_SESSIONS                  "Sessions"
#define FIELD_NAME_STATUS                    "Status"
#define FIELD_NAME_DICT_CREATED              "DictionaryCreated"
#define FIELD_NAME_DICT_VERSION              "DictionaryVersion"
#define FIELD_NAME_DICT_CREATE_TIME          "DictionaryCreateTime"
#define FIELD_NAME_TYPE                      "Type"
#define FIELD_NAME_EXTERNAL_DATA_NAME        "ExternalDataName"
#define FIELD_NAME_TOTAL_RECORDS             "TotalRecords"
#define FIELD_NAME_TOTAL_LOBS                "TotalLobs"
#define FIELD_NAME_TOTAL_DATA_PAGES          "TotalDataPages"
#define FIELD_NAME_TOTAL_INDEX_PAGES         "TotalIndexPages"
#define FIELD_NAME_TOTAL_LOB_PAGES           "TotalLobPages"
#define FIELD_NAME_TOTAL_DATA_FREESPACE      "TotalDataFreeSpace"
#define FIELD_NAME_TOTAL_INDEX_FREESPACE     "TotalIndexFreeSpace"
#define FIELD_NAME_CURR_COMPRESS_RATIO       "CurrentCompressionRatio"
#define FIELD_NAME_EDUNAME                   "Name"
#define FIELD_NAME_QUEUE_SIZE                "QueueSize"
#define FIELD_NAME_PROCESS_EVENT_COUNT       "ProcessEventCount"
#define FIELD_NAME_RELATED_ID                "RelatedID"
#define FIELD_NAME_ID                        "ID"
#define FIELD_NAME_LOGICAL_ID                "LogicalID"
#define FIELD_NAME_SEQUENCE                  "Sequence"
#define FIELD_NAME_INDEXES                   "Indexes"
#define FIELD_NAME_DETAILS                   "Details"
#define FIELD_NAME_NUMCOLLECTIONS            "NumCollections"
#define FIELD_NAME_COLLECTIONHWM             "CollectionHWM"
#define FIELD_NAME_SIZE                      "Size"
#define FIELD_NAME_MAX                       "Max"
#define FIELD_NAME_TRACE                     "trace"
#define FIELD_NAME_BREAKPOINTS               "BreakPoint"
#define FIELD_NAME_TO                        "To"
#define FIELD_NAME_OLDNAME                   "OldName"
#define FIELD_NAME_NEWNAME                   "NewName"
#define FIELD_NAME_INDEX                     "Index"
#define FIELD_NAME_TOTAL                     "Total"
#define FIELD_NAME_ERROR_NO                  "ErrNo"
#define FIELD_NAME_LOWBOUND                  "LowBound"
#define FIELD_NAME_UPBOUND                   "UpBound"
#define FIELD_NAME_SOURCE                    "Source"
#define FIELD_NAME_TARGET                    "Target"
#define FIELD_NAME_SPLITQUERY                "SplitQuery"
#define FIELD_NAME_SPLITENDQUERY             "SplitEndQuery"
#define FIELD_NAME_SPLITPERCENT              "SplitPercent"
#define FIELD_NAME_SPLITVALUE                "SplitValue"
#define FIELD_NAME_SPLITENDVALUE             "SplitEndValue"
#define FIELD_NAME_RECEIVECOUNT              "ReceivedEvents"
#define FIELD_NAME_TASKTYPE                  "TaskType"
#define FIELD_NAME_TASKID                    "TaskID"
#define FIELD_NAME_SOURCEID                  "SourceID"
#define FIELD_NAME_TARGETID                  "TargetID"
#define FIELD_NAME_ASYNC                     "Async"
#define FIELD_NAME_OPTIONS                   "Options"
#define FIELD_NAME_CONDITION                 "Condition"
#define FIELD_NAME_RULE                      "Rule"
#define FIELD_NAME_SORT                      "Sort"
#define FIELD_NAME_HINT                      "Hint"
#define FIELD_NAME_SELECTOR                  "Selector"
#define FIELD_NAME_SKIP                      "Skip"
#define FIELD_NAME_RETURN                    "Return"
#define FIELD_NAME_COMPONENTS                "Components"
#define FIELD_NAME_THREADS                   "Threads"
#define FIELD_NAME_FILENAME                  "FileName"
#define FIELD_NAME_TRACESTARTED              "TraceStarted"
#define FIELD_NAME_WRAPPED                   "Wrapped"
#define FIELD_NAME_MASK                      "Mask"
#define FIELD_NAME_AGGR                      "Aggr"
#define FIELD_NAME_CMD                       "CMD"
#define FIELD_NAME_DATABLOCKS                "Datablocks"
#define FIELD_NAME_SCANTYPE                  "ScanType"
#define VALUE_NAME_TBSCAN                    "tbscan"
#define VALUE_NAME_IXSCAN                    "ixscan"
#define FIELD_NAME_INDEXNAME                 "IndexName"
#define FIELD_NAME_INDEXLID                  "IndexLID"
#define FIELD_NAME_DIRECTION                 "Direction"
#define FIELD_NAME_INDEXBLOCKS               "Indexblocks"
#define FIELD_NAME_STARTKEY                  "StartKey"
#define FIELD_NAME_ENDKEY                    "EndKey"
#define FIELD_NAME_STARTRID                  "StartRID"
#define FIELD_NAME_ENDRID                    "EndRID"
#define FIELD_NAME_META                      "$Meta"
#define FIELD_NAME_SET_ON_INSERT             "$SetOnInsert"
#define FIELD_NAME_PATH                      "Path"
#define FIELD_NAME_DESP                      "Description"
#define FIELD_NAME_ENSURE_INC                "EnsureInc"
#define FIELD_NAME_OVERWRITE                 "OverWrite"
#define FIELD_NAME_DETAIL                    "Detail"
#define FIELD_NAME_ESTIMATE                  "Estimate"
#define FIELD_NAME_SEARCH                    "Search"
#define FIELD_NAME_EVALUATE                  "Evaluate"
#define FIELD_NAME_EXPAND                    "Expand"
#define FIELD_NAME_LOCATION                  "Location"
#define FIELD_NAME_FLATTEN                   "Flatten"
#define FIELD_NAME_ISSUBDIR                  "IsSubDir"
#define FIELD_NAME_ENABLE_DATEDIR            "EnableDateDir"
#define FIELD_NAME_PREFIX                    "Prefix"
#define FIELD_NAME_MAX_DATAFILE_SIZE         "MaxDataFileSize"
#define FIELD_NAME_BACKUP_LOG                "BackupLog"
#define FIELD_NAME_USE_EXT_SORT              "UseExtSort"
#define FIELD_NAME_SUB_COLLECTIONS           "SubCollections"
#define FIELD_NAME_ELAPSED_TIME              "ElapsedTime"
#define FIELD_NAME_RETURN_NUM                "ReturnNum"
#define FIELD_NAME_RUN                       "Run"
#define FIELD_NAME_CLUSTERNAME               "ClusterName"
#define FIELD_NAME_BUSINESSNAME              "BusinessName"
#define FIELD_NAME_DATACENTER                "DataCenter"
#define FIELD_NAME_ADDRESS                   "Address"
#define FIELD_NAME_IMAGE                     "Image"
#define FIELD_NAME_ACTIVATED                 "Activated"
#define FIELD_NAME_READONLY                  "Readonly"
#define FIELD_NAME_ENABLE                    "Enable"
#define FIELD_NAME_ACTION                    "Action"
#define FIELD_NAME_DATA                      "Data"
#define FIELD_NAME_DATALEN                   "DataLen"
#define FIELD_NAME_ORG_LSNOFFSET             "OrgOffset"
#define FIELD_NAME_TRANSACTION_ID            "TransactionID"
#define FIELD_NAME_TRANS_LSN_CUR             "CurrentTransLSN"
#define FIELD_NAME_IS_ROLLBACK               "IsRollback"
#define FIELD_NAME_TRANS_LOCKS_NUM           "TransactionLocksNum"
#define FIELD_NAME_TRANS_LOCKS               "GotLocks"
#define FIELD_NAME_TRANS_WAIT_LOCK           "WaitLock"
#define FIELD_NAME_SLICE                     "Slice"
#define FIELD_NAME_REMOTE_IP                 "RemoteIP"
#define FIELD_NAME_REMOTE_PORT               "RemotePort"

#define FIELD_NAME_MODIFY                    "$Modify"
#define FIELD_NAME_OP                        "OP"
#define FIELD_NAME_OP_UPDATE                 "Update"
#define FIELD_NAME_OP_REMOVE                 "Remove"
#define FIELD_NAME_RETURNNEW                 "ReturnNew"
#define FIELD_NAME_KEEP_SHARDING_KEY         "KeepShardingKey"

#define FIELD_NAME_INSERT                    "Insert"
#define FIELD_NAME_UPDATE                    "Update"
#define FIELD_NAME_DELETE                    "Delete"
#define FIELD_NAME_NLJOIN                    "NLJoin"
#define FIELD_NAME_HASHJOIN                  "HashJoin"
#define FIELD_NAME_SCAN                      "Scan"
#define FIELD_NAME_FILTER                    "Filter"
#define FIELD_NAME_SPLITBY                   "SPLITBY"
#define FIELD_NAME_DATA_COMMIT_LSN           "DataCommitLSN"
#define FIELD_NAME_IDX_COMMIT_LSN            "IndexCommitLSN"
#define FIELD_NAME_LOB_COMMIT_LSN            "LobCommitLSN"
#define FIELD_NAME_DATA_COMMITTED            "DataCommitted"
#define FIELD_NAME_IDX_COMMITTED             "IndexCommitted"
#define FIELD_NAME_LOB_COMMITTED             "LobCommitted"
#define FIELD_NAME_DIRTY_PAGE                "DirtyPage"

#define FIELD_NAME_PDLEVEL                   "PDLevel"
#define FIELD_NAME_ASYNCHRONOUS              "asynchronous"
#define FIELD_NAME_THREADNUM                 "threadNum"
#define FIELD_NAME_BUCKETNUM                 "bucketNum"
#define FIELD_NAME_PARSEBUFFERSIZE           "parseBufferSize"
#define FIELD_NAME_ATTRIBUTE                 "Attribute"
#define FIELD_NAME_ATTRIBUTE_DESC            "AttributeDesc"
#define FIELD_NAME_RCFLAG                    "Flag"
#define FIELD_NAME_GROUPBY_ID                "_id"
#define FIELD_NAME_FIELDS                    "fields"
#define FIELD_NAME_HEADERLINE                "headerline"
#define FIELD_NAME_LTYPE                     "type"
#define FIELD_NAME_CHARACTER                 "character"
#define FIELD_NAME_GLOBAL                    "Global"
#define FIELD_NAME_ERROR_NODES               "ErrNodes"
#define FIELD_NAME_ERROR_IINFO               "ErrInfo"
#define FIELD_NAME_FUNC                      "func"
#define FIELD_NAME_FUNCTYPE                  "funcType"
#define FIELD_NAME_PREFERED_INSTANCE         "PreferedInstance"
#define FIELD_NAME_PREFERED_INSTANCE_V1      "PreferedInstanceV1"
#define FIELD_NAME_PREFERED_INSTANCE_MODE    "PreferedInstanceMode"
#define FIELD_NAME_TIMEOUT                   "Timeout"
#define FIELD_NAME_NODE_SELECT               "NodeSelect"
#define FIELD_NAME_RAWDATA                   "RawData"
#define FIELD_NAME_SYS_AGGR                  "$Aggr"

#define FIELD_NAME_FREELOGSPACE              "freeLogSpace"
#define FIELD_NAME_VSIZE                     "vsize"
#define FIELD_NAME_RSS                       "rss"
#define FIELD_NAME_FAULT                     "fault"
#define FIELD_NAME_SVC_NETIN                 "svcNetIn"
#define FIELD_NAME_SVC_NETOUT                "svcNetOut"
#define FIELD_NAME_REPL_NETIN                "replNetIn"
#define FIELD_NAME_REPL_NETOUT               "replNetOut"
#define FIELD_NAME_SHARD_NETIN               "shardNetIn"
#define FIELD_NAME_SHARD_NETOUT              "shardNetOut"
#define FIELD_NAME_DOMAIN_AUTO_SPLIT         "AutoSplit"
#define FIELD_NAME_DOMAIN_AUTO_REBALANCE     "AutoRebalance"
#define FIELD_NAME_LOB_OID                   "Oid"
#define FIELD_NAME_LOB_OPEN_MODE             "Mode"
#define FIELD_NAME_LOB_SIZE                  "Size"
#define FIELD_NAME_LOB_CREATETIME            "CreateTime"
#define FIELD_NAME_LOB_MODIFICATION_TIME     "ModificationTime"
#define FIELD_NAME_LOB_FLAG                  "Flag"
#define FIELD_NAME_LOB_PIECESINFONUM         "PiecesInfoNum"
#define FIELD_NAME_LOB_PIECESINFO            "PiecesInfo"
#define FIELD_NAME_LOB_IS_MAIN_SHD           "IsMainShard"
#define FIELD_NAME_LOB_REOPENED              "Reopened"
#define FIELD_NAME_LOB_LOCK_SECTIONS         "LockSections"
#define FIELD_NAME_LOB_META_DATA             "MetaData"
#define FIELD_NAME_LOB_LIST_PIECES_MODE      "ListPieces"
#define FIELD_NAME_LOB_AVAILABLE             "Available"
#define FIELD_NAME_LOB_HAS_PIECESINFO        "HasPiecesInfo"
#define FIELD_NAME_LOB_PAGE_SZ               "LobPageSize"
#define FIELD_NAME_LOB_OFFSET                "Offset"
#define FIELD_NAME_LOB_LENGTH                "Length"
#define FIELD_NAME_LOB_ACCESSID              "AccessId"
#define FIELD_NAME_AUTO_INDEX_ID             "AutoIndexId"
#define FIELD_NAME_REELECTION_TIMEOUT        "Seconds"
#define FIELD_NAME_REELECTION_LEVEL          "Level"
#define FIELD_NAME_FORCE_STEP_UP_TIME        FIELD_NAME_REELECTION_TIMEOUT
#define FIELD_NAME_INTERNAL_VERSION          "InternalV"
#define FIELD_NAME_RTYPE                     "ReturnType"
#define FIELD_NAME_IX_BOUND                  "IXBound"
#define FIELD_NAME_QUERY                     "Query"
#define FIELD_NAME_NEED_MATCH                "NeedMatch"
#define FIELD_NAME_RTYPE                     "ReturnType"
#define FIELD_NAME_ONLY_DETACH               "OnlyDetach"
#define FIELD_NAME_ONLY_ATTACH               "OnlyAttach"
#define FIELD_NAME_ALTER_TYPE                "AlterType"
#define FIELD_NAME_ARGS                      "Args"
#define FIELD_NAME_ALTER                     "Alter"
#define FIELD_NAME_IGNORE_EXCEPTION          "IgnoreException"
#define FIELD_NAME_KEEP_DATA                 "KeepData"
#define FIELD_NAME_DEEP                      "Deep"
#define FIELD_NAME_BLOCK                     "Block"
#define FIELD_NAME_CAPPED                    "Capped"
#define FIELD_NAME_TEXT                      "$Text"
#define FIELD_NAME_CONFIGS                   "Configs"

#define FIELD_NAME_NICE                      "Nice"
#define FIELD_NAME_TASK_NAME                 "TaskName"
#define FIELD_NAME_CONTAINER_NAME            "ContainerName"
#define FIELD_NAME_IP                        "IP"
#define FIELD_NAME_TASK_ID                   "TaskID"

#define FIELD_NAME_ANALYZE_MODE              "Mode"
#define FIELD_NAME_ANALYZE_NUM               "SampleNum"
#define FIELD_NAME_ANALYZE_PERCENT           "SamplePercent"

#define FIELD_OP_VALUE_UPDATE                "update"
#define FIELD_OP_VALUE_REMOVE                "remove"

#define FIELD_OP_VALUE_KEEP                  "keep"
#define FIELD_OP_VALUE_REPLACE               "replace"

#define FIELD_NAME_PARAM                     "$param"
#define FIELD_NAME_CTYPE                     "$ctype"
#define FIELD_NAME_PARAMETERS                "Parameters"

#define IXM_FIELD_NAME_KEY                   "key"
#define IXM_FIELD_NAME_NAME                  "name"
#define IXM_FIELD_NAME_UNIQUE                "unique"
#define IXM_FIELD_NAME_V                     "v"
#define IXM_FIELD_NAME_ENFORCED              "enforced"
#define IXM_FIELD_NAME_DROPDUPS              "dropDups"
#define IXM_FIELD_NAME_2DRANGE               "2drange"
#define IXM_FIELD_NAME_INDEX_DEF             "IndexDef"
#define IXM_FIELD_NAME_INDEX_FLAG            "IndexFlag"
#define IXM_FIELD_NAME_SCAN_EXTLID           "ScanExtentLID"
#define IXM_FIELD_NAME_SORT_BUFFER_SIZE      "SortBufferSize"

#define CMD_NAME_ENFORCED                    "enforced"

#define CMD_ADMIN_PREFIX                     "$"
#define CMD_NAME_BACKUP_OFFLINE              "backup offline"
#define CMD_NAME_CREATE_COLLECTION           "create collection"
#define CMD_NAME_ALTER_COLLECTION            "alter collection"
#define CMD_NAME_CREATE_COLLECTIONSPACE      "create collectionspace"
#define CMD_NAME_CREATE_INDEX                "create index"
#define CMD_NAME_CANCEL_TASK                 "cancel task"
#define CMD_NAME_DROP_COLLECTION             "drop collection"
#define CMD_NAME_DROP_COLLECTIONSPACE        "drop collectionspace"
#define CMD_NAME_LOAD_COLLECTIONSPACE        "load collectionspace"
#define CMD_NAME_UNLOAD_COLLECTIONSPACE      "unload collectionspace"
#define CMD_NAME_DROP_INDEX                  "drop index"
#define CMD_NAME_GET_COUNT                   "get count"
#define CMD_NAME_GET_INDEXES                 "get indexes"
#define CMD_NAME_GET_DATABLOCKS              "get datablocks"
#define CMD_NAME_GET_QUERYMETA               "get querymeta"
#define CMD_NAME_GET_CONFIG                  "get config"
#define CMD_NAME_GET_DCINFO                  "get dcinfo"
#define CMD_NAME_LIST_COLLECTIONS            "list collections"
#define CMD_NAME_LIST_COLLECTIONSPACES       "list collectionspaces"
#define CMD_NAME_LIST_CONTEXTS               "list contexts"
#define CMD_NAME_LIST_CONTEXTS_CURRENT       "list contexts current"
#define CMD_NAME_LIST_SESSIONS               "list sessions"
#define CMD_NAME_LIST_SESSIONS_CURRENT       "list sessions current"
#define CMD_NAME_LIST_STORAGEUNITS           "list storageunits"
#define CMD_NAME_LIST_GROUPS                 "list groups"
#define CMD_NAME_LIST_DOMAINS                "list domains"
#define CMD_NAME_LIST_CS_IN_DOMAIN           "list collectionspaces in domain"
#define CMD_NAME_LIST_CL_IN_DOMAIN           "list collections in domain"
#define CMD_NAME_LIST_BACKUPS                "list backups"
#define CMD_NAME_LIST_TASKS                  "list tasks"
#define CMD_NAME_LIST_TRANSACTIONS           "list transactions"
#define CMD_NAME_LIST_TRANSACTIONS_CUR       "list transactions current"
#define CMD_NAME_RENAME_COLLECTION           "rename collection"
#define CMD_NAME_RENAME_COLLECTIONSPACE      "rename collectionspace"
#define CMD_NAME_REORG_OFFLINE               "reorg offline"
#define CMD_NAME_REORG_ONLINE                "reorg online"
#define CMD_NAME_REORG_RECOVER               "reorg recover"
#define CMD_NAME_SHUTDOWN                    "shutdown"
#define CMD_NAME_SNAPSHOT_CONTEXTS           "snapshot contexts"
#define CMD_NAME_SNAPSHOT_CONTEXTS_CURRENT   "snapshot contexts current"
#define CMD_NAME_SNAPSHOT_DATABASE           "snapshot database"
#define CMD_NAME_SNAPSHOT_RESET              "snapshot reset"
#define CMD_NAME_SNAPSHOT_SESSIONS           "snapshot sessions"
#define CMD_NAME_SNAPSHOT_SESSIONS_CURRENT   "snapshot sessions current"
#define CMD_NAME_SNAPSHOT_SYSTEM             "snapshot system"
#define CMD_NAME_SNAPSHOT_COLLECTIONS        "snapshot collections"
#define CMD_NAME_SNAPSHOT_COLLECTIONSPACES   "snapshot collectionspaces"
#define CMD_NAME_SNAPSHOT_CATA               "snapshot catalog"
#define CMD_NAME_SNAPSHOT_TRANSACTIONS       "snapshot transactions"
#define CMD_NAME_SNAPSHOT_TRANSACTIONS_CUR   "snapshot transactions current"
#define CMD_NAME_SNAPSHOT_ACCESSPLANS        "snapshot accessplans"
#define CMD_NAME_SNAPSHOT_HEALTH             "snapshot health"
#define CMD_NAME_SNAPSHOT_CONFIG             "snapshot config"
#define CMD_NAME_TEST_COLLECTION             "test collection"
#define CMD_NAME_TEST_COLLECTIONSPACE        "test collectionspace"
#define CMD_NAME_CREATE_GROUP                "create group"
#define CMD_NAME_REMOVE_GROUP                "remove group"
#define CMD_NAME_CREATE_NODE                 "create node"
#define CMD_NAME_REMOVE_NODE                 "remove node"
#define CMD_NAME_REMOVE_BACKUP               "remove backup"
#define CMD_NAME_UPDATE_NODE                 "update node"
#define CMD_NAME_ACTIVE_GROUP                "active group"
#define CMD_NAME_STARTUP_NODE                "startup node"
#define CMD_NAME_SHUTDOWN_NODE               "shutdown node"
#define CMD_NAME_SHUTDOWN_GROUP              "shutdown group"
#define CMD_NAME_SET_PDLEVEL                 "set pdlevel"
#define CMD_NAME_SPLIT                       "split"
#define CMD_NAME_WAITTASK                    "wait task"
#define CMD_NAME_CREATE_CATA_GROUP           "create catalog group"
#define CMD_NAME_TRACE_START                 "trace start"
#define CMD_NAME_TRACE_RESUME                "trace resume"
#define CMD_NAME_TRACE_STOP                  "trace stop"
#define CMD_NAME_TRACE_STATUS                "trace status"
#define CMD_NAME_CREATE_DOMAIN               "create domain"
#define CMD_NAME_DROP_DOMAIN                 "drop domain"
#define CMD_NAME_ALTER_DOMAIN                "alter domain"
#define CMD_NAME_ADD_DOMAIN_GROUP            "add domain group"
#define CMD_NAME_REMOVE_DOMAIN_GROUP         "remove domain group"
#define CMD_NAME_EXPORT_CONFIG               "export configuration"
#define CMD_NAME_CRT_PROCEDURE               "create procedure"
#define CMD_NAME_RM_PROCEDURE                "remove procedure"
#define CMD_NAME_LIST_PROCEDURES             "list procedures"
#define CMD_NAME_EVAL                        "eval"
#define CMD_NAME_LINK_CL                     "link collection"
#define CMD_NAME_UNLINK_CL                   "unlink collection"
#define CMD_NAME_SETSESS_ATTR                "set session attribute"
#define CMD_NAME_GETSESS_ATTR                "get session attribute"
#define CMD_NAME_INVALIDATE_CACHE            "invalidate cache"
#define CMD_NAME_FORCE_SESSION               "force session"
#define CMD_NAME_LIST_LOBS                   "list lobs"
#define CMD_NAME_ALTER_DC                    "alter dc"
#define CMD_NAME_REELECT                     "reelect"
#define CMD_NAME_FORCE_STEP_UP               "force step up"
#define CMD_NAME_JSON_LOAD                   "json load"
#define CMD_NAME_TRUNCATE                    "truncate"
#define CMD_NAME_LIST_USERS                  "list users"
#define CMD_NAME_SYNC_DB                     "sync db"
#define CMD_NAME_POP                         "pop"
#define CMD_NAME_RELOAD_CONFIG               "reload config"
#define CMD_NAME_UPDATE_CONFIG               "update config"
#define CMD_NAME_DELETE_CONFIG               "delete config"
#define CMD_NAME_ANALYZE                     "analyze"

#define CMD_NAME_SNAPSHOT_DATABASE_INTR      "SNAPSHOT_DB"
#define CMD_NAME_SNAPSHOT_SYSTEM_INTR        "SNAPSHOT_SYSTEM"
#define CMD_NAME_SNAPSHOT_COLLECTION_INTR    "SNAPSHOT_CL"
#define CMD_NAME_SNAPSHOT_SPACE_INTR         "SNAPSHOT_CS"
#define CMD_NAME_SNAPSHOT_CONTEXT_INTR       "SNAPSHOT_CONTEXT"
#define CMD_NAME_SNAPSHOT_CONTEXTCUR_INTR    "SNAPSHOT_CONTEXT_CUR"
#define CMD_NAME_SNAPSHOT_SESSION_INTR       "SNAPSHOT_SESSION"
#define CMD_NAME_SNAPSHOT_SESSIONCUR_INTR    "SNAPSHOT_SESSION_CUR"
#define CMD_NAME_SNAPSHOT_CATA_INTR          "SNAPSHOT_CATA"
#define CMD_NAME_SNAPSHOT_TRANS_INTR         "SNAPSHOT_TRANS"
#define CMD_NAME_SNAPSHOT_TRANSCUR_INTR      "SNAPSHOT_TRANS_CUR"
#define CMD_NAME_SNAPSHOT_ACCESSPLANS_INTR   "SNAPSHOT_ACCESSPLANS"
#define CMD_NAME_SNAPSHOT_HEALTH_INTR        "SNAPSHOT_HEALTH"
#define CMD_NAME_SNAPSHOT_CONFIG_INTR        "SNAPSHOT_CONFIG"

#define CMD_NAME_LIST_COLLECTION_INTR        "LIST_CL"
#define CMD_NAME_LIST_SPACE_INTR             "LIST_CS"
#define CMD_NAME_LIST_CONTEXT_INTR           "LIST_CONTEXT"
#define CMD_NAME_LIST_CONTEXTCUR_INTR        "LIST_CONTEXT_CUR"
#define CMD_NAME_LIST_SESSION_INTR           "LIST_SESSION"
#define CMD_NAME_LIST_SESSIONCUR_INTR        "LIST_SESSION_CUR"
#define CMD_NAME_LIST_STORAGEUNIT_INTR       "LIST_SU"
#define CMD_NAME_LIST_BACKUP_INTR            "LIST_BACKUP"
#define CMD_NAME_LIST_TRANS_INTR             "LIST_TRANS"
#define CMD_NAME_LIST_TRANSCUR_INTR          "LIST_TRANS_CUR"
#define CMD_NAME_LIST_GROUP_INTR             "LIST_GROUP"
#define CMD_NAME_LIST_USER_INTR              "LIST_USER"
#define CMD_NAME_LIST_TASK_INTR              "LIST_TASK"
#define CMD_NAME_LIST_DOMAIN_INTR            "LIST_DOMAIN"

#define CMD_VALUE_NAME_CREATE                "create image"
#define CMD_VALUE_NAME_REMOVE                "remove image"
#define CMD_VALUE_NAME_ATTACH                "attach groups"
#define CMD_VALUE_NAME_DETACH                "detach groups"
#define CMD_VALUE_NAME_ENABLE                "enable image"
#define CMD_VALUE_NAME_DISABLE               "disable image"
#define CMD_VALUE_NAME_ACTIVATE              "activate"
#define CMD_VALUE_NAME_DEACTIVATE            "deactivate"
#define CMD_VALUE_NAME_ENABLE_READONLY       "enable readonly"
#define CMD_VALUE_NAME_DISABLE_READONLY      "disable readonly"

#define CLS_REPLSET_MAX_NODE_SIZE            7
#define SDB_MAX_MSG_LENGTH                   ( 512 * 1024 * 1024 )

#define INVALID_GROUPID                      0
#define CATALOG_GROUPID                      1
#define COORD_GROUPID                        2
#define OM_GROUPID                           3
#define OMAGENT_GROUPID                      4
#define SPARE_GROUPID                        5
#define CATALOG_GROUPNAME                    SYS_PREFIX"CatalogGroup"
#define COORD_GROUPNAME                      SYS_PREFIX"Coord"
#define SPARE_GROUPNAME                      SYS_PREFIX"Spare"
#define OM_GROUPNAME                         SYS_PREFIX"OM"
#define NODE_NAME_SERVICE_SEP                ":"
#define NODE_NAME_SERVICE_SEPCHAR            (((CHAR*)NODE_NAME_SERVICE_SEP)[0])
#define INVALID_NODEID                       0
#define CURRENT_NODEID                       -1
#define SYS_NODE_ID_BEGIN                    1
#define SYS_NODE_ID_END                      ( OM_NODE_ID_BEGIN - 1 )
#define OM_NODE_ID_BEGIN                     800
#define OM_NODE_ID_END                       ( RESERVED_NODE_ID_BEGIN - 1 )
#define RESERVED_NODE_ID_BEGIN               810
#define RESERVED_NODE_ID_END                 ( DATA_NODE_ID_BEGIN - 1 )
#define DATA_NODE_ID_BEGIN                   1000
#define DATA_NODE_ID_END                     ( 60000 + DATA_NODE_ID_BEGIN )
#define DATA_GROUP_ID_BEGIN                  1000
#define DATA_GROUP_ID_END                    ( 60000 + DATA_GROUP_ID_BEGIN )
#define CATA_NODE_MAX_NUM                    CLS_REPLSET_MAX_NODE_SIZE

#define SDB_INDEX_SORT_BUFFER_DEFAULT_SIZE   64

#define SDB_ROLE_DATA_STR                    "data"
#define SDB_ROLE_COORD_STR                   "coord"
#define SDB_ROLE_CATALOG_STR                 "catalog"
#define SDB_ROLE_STANDALONE_STR              "standalone"
#define SDB_ROLE_OM_STR                      "om"
#define SDB_ROLE_OMA_STR                     "cm"

#define SDB_AUTH_USER                        "User"
#define SDB_AUTH_PASSWD                      "Passwd"
#define SDB_AUTH_SOURCE                      "Source"

#define SDB_LOB_OID_LEN                      16

enum SDB_ROLE
{
   SDB_ROLE_DATA = 0,
   SDB_ROLE_COORD,
   SDB_ROLE_CATALOG,
   SDB_ROLE_STANDALONE,
   SDB_ROLE_OM,
   SDB_ROLE_OMA,
   SDB_ROLE_MAX
} ;

enum SDB_LOB_MODE
{
   SDB_LOB_MODE_CREATEONLY = 0x00000001,
   SDB_LOB_MODE_READ       = 0x00000004,
   SDB_LOB_MODE_WRITE      = 0x00000008,
   SDB_LOB_MODE_REMOVE     = 0x00000010,
   SDB_LOB_MODE_TRUNCATE   = 0x00000020
} ;

#define SDB_IS_VALID_LOB_MODE( mode ) \
   ( SDB_LOB_MODE_READ == ( mode ) || \
     SDB_LOB_MODE_CREATEONLY == ( mode ) || \
     SDB_LOB_MODE_WRITE == ( mode ) || \
     SDB_LOB_MODE_REMOVE == ( mode ) || \
     SDB_LOB_MODE_TRUNCATE == ( mode ) )

#define SDB_ANALYZE_MODE_SAMPLE     ( 1 )
#define SDB_ANALYZE_MODE_FULL       ( 2 )
#define SDB_ANALYZE_MODE_GENDFT     ( 3 )
#define SDB_ANALYZE_MODE_RELOAD     ( 4 )
#define SDB_ANALYZE_MODE_CLEAR      ( 5 )

#define SDB_ANALYZE_SAMPLE_MIN      ( 100 )
#define SDB_ANALYZE_SAMPLE_DEF      ( 200 )
#define SDB_ANALYZE_SAMPLE_MAX      ( 10000 )

#define SDB_ALTER_VERSION 1

#define SDB_ALTER_DB          "db"
#define SDB_ALTER_CL          "collection"
#define SDB_ALTER_CS          "collection space"
#define SDB_ALTER_DOMAIN      "domain"
#define SDB_ALTER_GROUP       "group"
#define SDB_ALTER_NODE        "node"

#define SDB_ALTER_CRT_ID_INDEX     "create id index"
#define SDB_ALTER_DROP_ID_INDEX    "drop id index"

#endif // MSGDEF_H__
