/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_shmop_open, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_shmop_read, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, shmid)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_close, 0, 1, IS_VOID, 0)
	ZEND_ARG_INFO(0, shmid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, shmid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_shmop_write, 0, 3, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, shmid)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_delete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, shmid)
ZEND_END_ARG_INFO()
