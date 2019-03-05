/* Generated code for Python module 'Inc.Util.OS'
 * created by Nuitka version 0.6.2
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_Inc$Util$OS" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Inc$Util$OS;
PyDictObject *moduledict_Inc$Util$OS;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Disk;
static PyObject *const_str_plain_f_blocks;
static PyObject *const_str_digest_363ac9fa4b118413aaf58a5b54a939e0;
static PyObject *const_str_plain_minor;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_Str1;
static PyObject *const_str_digest_a58090f4a939ac81efbf0fdefd1797e0;
extern PyObject *const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
extern PyObject *const_str_plain_FS;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_ExecM;
extern PyObject *const_tuple_str_plain_FS_tuple;
static PyObject *const_str_digest_a27630f96525ad9a905338b65497c498;
static PyObject *const_str_plain_PIPE;
static PyObject *const_str_plain_communicate;
static PyObject *const_str_plain_statvfs;
extern PyObject *const_str_digest_ade26fea59a84e8b725866efbaa8d71b;
static PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_GetMachineId;
extern PyObject *const_str_plain_LoadFromFileToStr;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_aName;
extern PyObject *const_str_plain_GetVersion;
extern PyObject *const_str_plain_Result;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_md5;
static PyObject *const_str_plain_hexdigest;
static PyObject *const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain_Pipe;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_micro;
static PyObject *const_str_digest_cf22706d530afd7de9c368b5c8691b09;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Unknown;
static PyObject *const_str_digest_76a2a5b8b28f31ac74b8c8c688659b8a;
static PyObject *const_tuple_str_digest_caf952e83ca2ffea8bd10ec869462969_tuple;
static PyObject *const_str_plain_f_bsize;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_shell;
static PyObject *const_str_plain_hashlib;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_str_plain_MacId;
static PyObject *const_str_plain_stdout;
static PyObject *const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple;
static PyObject *const_str_plain_MachineId;
extern PyObject *const_str_plain_aMsg;
static PyObject *const_str_plain_f_bfree;
extern PyObject *const_str_plain_GetDiskInfo;
static PyObject *const_str_plain_aCmd;
static PyObject *const_tuple_str_plain_aName_str_plain_Disk_tuple;
static PyObject *const_str_plain_major;
static PyObject *const_str_plain_Popen;
extern PyObject *const_str_plain_GetMac;
extern PyObject *const_str_plain_Net;
static PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_str_digest_5094b64de39a44069f78411731d38c67;
static PyObject *const_str_digest_caf952e83ca2ffea8bd10ec869462969;
static PyObject *const_str_plain_subprocess;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_f_blocks = UNSTREAM_STRING( &constant_bin[ 21369 ], 8, 1 );
    const_str_digest_363ac9fa4b118413aaf58a5b54a939e0 = UNSTREAM_STRING( &constant_bin[ 21377 ], 55, 0 );
    const_str_plain_minor = UNSTREAM_STRING( &constant_bin[ 21432 ], 5, 1 );
    const_str_digest_a58090f4a939ac81efbf0fdefd1797e0 = UNSTREAM_STRING( &constant_bin[ 21437 ], 11, 0 );
    const_str_plain_ExecM = UNSTREAM_STRING( &constant_bin[ 21448 ], 5, 1 );
    const_str_digest_a27630f96525ad9a905338b65497c498 = UNSTREAM_STRING( &constant_bin[ 21453 ], 8, 0 );
    const_str_plain_PIPE = UNSTREAM_STRING( &constant_bin[ 21461 ], 4, 1 );
    const_str_plain_communicate = UNSTREAM_STRING( &constant_bin[ 21465 ], 11, 1 );
    const_str_plain_statvfs = UNSTREAM_STRING( &constant_bin[ 21476 ], 7, 1 );
    const_str_digest_c075052d723d6707083e869a0e3659bb = UNSTREAM_STRING( &constant_bin[ 21483 ], 5, 0 );
    const_str_plain_GetMachineId = UNSTREAM_STRING( &constant_bin[ 21488 ], 12, 1 );
    const_str_plain_md5 = UNSTREAM_STRING( &constant_bin[ 21500 ], 3, 1 );
    const_str_plain_hexdigest = UNSTREAM_STRING( &constant_bin[ 21503 ], 9, 1 );
    const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple = PyTuple_New( 3 );
    const_str_plain_MachineId = UNSTREAM_STRING( &constant_bin[ 21491 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple, 0, const_str_plain_MachineId ); Py_INCREF( const_str_plain_MachineId );
    PyTuple_SET_ITEM( const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple, 1, const_str_plain_Str1 ); Py_INCREF( const_str_plain_Str1 );
    const_str_plain_MacId = UNSTREAM_STRING( &constant_bin[ 21512 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple, 2, const_str_plain_MacId ); Py_INCREF( const_str_plain_MacId );
    const_str_plain_Pipe = UNSTREAM_STRING( &constant_bin[ 21517 ], 4, 1 );
    const_str_plain_micro = UNSTREAM_STRING( &constant_bin[ 21521 ], 5, 1 );
    const_str_digest_cf22706d530afd7de9c368b5c8691b09 = UNSTREAM_STRING( &constant_bin[ 21526 ], 10, 0 );
    const_str_plain_Unknown = UNSTREAM_STRING( &constant_bin[ 1457 ], 7, 1 );
    const_str_digest_76a2a5b8b28f31ac74b8c8c688659b8a = UNSTREAM_STRING( &constant_bin[ 21536 ], 8, 0 );
    const_tuple_str_digest_caf952e83ca2ffea8bd10ec869462969_tuple = PyTuple_New( 1 );
    const_str_digest_caf952e83ca2ffea8bd10ec869462969 = UNSTREAM_STRING( &constant_bin[ 21544 ], 15, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_caf952e83ca2ffea8bd10ec869462969_tuple, 0, const_str_digest_caf952e83ca2ffea8bd10ec869462969 ); Py_INCREF( const_str_digest_caf952e83ca2ffea8bd10ec869462969 );
    const_str_plain_f_bsize = UNSTREAM_STRING( &constant_bin[ 21559 ], 7, 1 );
    const_str_plain_shell = UNSTREAM_STRING( &constant_bin[ 21566 ], 5, 1 );
    const_str_plain_hashlib = UNSTREAM_STRING( &constant_bin[ 21571 ], 7, 1 );
    const_str_plain_stdout = UNSTREAM_STRING( &constant_bin[ 21578 ], 6, 1 );
    const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple = PyTuple_New( 4 );
    const_str_plain_aCmd = UNSTREAM_STRING( &constant_bin[ 21584 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple, 0, const_str_plain_aCmd ); Py_INCREF( const_str_plain_aCmd );
    PyTuple_SET_ITEM( const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple, 1, const_str_plain_aMsg ); Py_INCREF( const_str_plain_aMsg );
    PyTuple_SET_ITEM( const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple, 2, const_str_plain_Pipe ); Py_INCREF( const_str_plain_Pipe );
    PyTuple_SET_ITEM( const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple, 3, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_plain_f_bfree = UNSTREAM_STRING( &constant_bin[ 21588 ], 7, 1 );
    const_tuple_str_plain_aName_str_plain_Disk_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aName_str_plain_Disk_tuple, 0, const_str_plain_aName ); Py_INCREF( const_str_plain_aName );
    PyTuple_SET_ITEM( const_tuple_str_plain_aName_str_plain_Disk_tuple, 1, const_str_plain_Disk ); Py_INCREF( const_str_plain_Disk );
    const_str_plain_major = UNSTREAM_STRING( &constant_bin[ 21595 ], 5, 1 );
    const_str_plain_Popen = UNSTREAM_STRING( &constant_bin[ 21600 ], 5, 1 );
    const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    const_str_digest_5094b64de39a44069f78411731d38c67 = UNSTREAM_STRING( &constant_bin[ 21605 ], 20, 0 );
    const_str_plain_subprocess = UNSTREAM_STRING( &constant_bin[ 21625 ], 10, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Inc$Util$OS( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_47c265488b5c4a430e769476020f1e67;
static PyCodeObject *codeobj_2cefbb5ec40fa3f696a0522d0fe79435;
static PyCodeObject *codeobj_fda935441413ee4f69903e00ce3420ed;
static PyCodeObject *codeobj_bdc13e435e043f97be6f630a2256018a;
static PyCodeObject *codeobj_9b97a31f1f0a9eaab863ef1b67acf8e8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_363ac9fa4b118413aaf58a5b54a939e0;
    codeobj_47c265488b5c4a430e769476020f1e67 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5094b64de39a44069f78411731d38c67, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2cefbb5ec40fa3f696a0522d0fe79435 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ExecM, 16, const_tuple_dd7d2a24c5dbbfd758ac6890ff7bc0af_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fda935441413ee4f69903e00ce3420ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetDiskInfo, 44, const_tuple_str_plain_aName_str_plain_Disk_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bdc13e435e043f97be6f630a2256018a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetMachineId, 26, const_tuple_str_plain_MachineId_str_plain_Str1_str_plain_MacId_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b97a31f1f0a9eaab863ef1b67acf8e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetVersion, 41, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_1_ExecM( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_2_GetMachineId(  );


static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_3_GetVersion(  );


static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_4_GetDiskInfo(  );


// The module function definitions.
static PyObject *impl_Inc$Util$OS$$$function_1_ExecM( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aCmd = python_pars[ 0 ];
    PyObject *par_aMsg = python_pars[ 1 ];
    PyObject *var_Pipe = NULL;
    PyObject *var_Result = NULL;
    struct Nuitka_FrameObject *frame_2cefbb5ec40fa3f696a0522d0fe79435;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_print_value;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2cefbb5ec40fa3f696a0522d0fe79435 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cefbb5ec40fa3f696a0522d0fe79435, codeobj_2cefbb5ec40fa3f696a0522d0fe79435, module_Inc$Util$OS, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2cefbb5ec40fa3f696a0522d0fe79435 = cache_frame_2cefbb5ec40fa3f696a0522d0fe79435;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cefbb5ec40fa3f696a0522d0fe79435 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cefbb5ec40fa3f696a0522d0fe79435 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = const_str_digest_a27630f96525ad9a905338b65497c498;
        tmp_print_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_print_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_aCmd );
        tmp_tuple_element_1 = par_aCmd;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_print_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_aMsg );
        tmp_tuple_element_1 = par_aMsg;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_print_value, 2, tmp_tuple_element_1 );
        tmp_result = PRINT_ITEM( tmp_print_value );
        Py_DECREF( tmp_print_value );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_subprocess );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "subprocess" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Popen );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_aCmd );
        tmp_tuple_element_2 = par_aCmd;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_value_1 = Py_True;
        tmp_dict_key_1 = const_str_plain_shell;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_subprocess );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "subprocess" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PIPE );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_stdout;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_2cefbb5ec40fa3f696a0522d0fe79435->m_frame.f_lineno = 20;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Pipe == NULL );
        var_Pipe = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_Pipe );
        tmp_called_instance_1 = var_Pipe;
        frame_2cefbb5ec40fa3f696a0522d0fe79435->m_frame.f_lineno = 21;
        tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_communicate );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Result == NULL );
        var_Result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_cf22706d530afd7de9c368b5c8691b09;
        CHECK_OBJECT( var_Result );
        tmp_right_name_1 = var_Result;
        tmp_print_value = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_print_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = PRINT_ITEM( tmp_print_value );
        Py_DECREF( tmp_print_value );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cefbb5ec40fa3f696a0522d0fe79435 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cefbb5ec40fa3f696a0522d0fe79435 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cefbb5ec40fa3f696a0522d0fe79435, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cefbb5ec40fa3f696a0522d0fe79435->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cefbb5ec40fa3f696a0522d0fe79435, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cefbb5ec40fa3f696a0522d0fe79435,
        type_description_1,
        par_aCmd,
        par_aMsg,
        var_Pipe,
        var_Result
    );


    // Release cached frame.
    if ( frame_2cefbb5ec40fa3f696a0522d0fe79435 == cache_frame_2cefbb5ec40fa3f696a0522d0fe79435 )
    {
        Py_DECREF( frame_2cefbb5ec40fa3f696a0522d0fe79435 );
    }
    cache_frame_2cefbb5ec40fa3f696a0522d0fe79435 = NULL;

    assertFrameObject( frame_2cefbb5ec40fa3f696a0522d0fe79435 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Result );
    tmp_return_value = var_Result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_1_ExecM );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aMsg );
    Py_DECREF( par_aMsg );
    par_aMsg = NULL;

    CHECK_OBJECT( (PyObject *)var_Pipe );
    Py_DECREF( var_Pipe );
    var_Pipe = NULL;

    CHECK_OBJECT( (PyObject *)var_Result );
    Py_DECREF( var_Result );
    var_Result = NULL;

    CHECK_OBJECT( (PyObject *)par_aCmd );
    Py_DECREF( par_aCmd );
    par_aCmd = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_aMsg );
    Py_DECREF( par_aMsg );
    par_aMsg = NULL;

    Py_XDECREF( var_Pipe );
    var_Pipe = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    CHECK_OBJECT( (PyObject *)par_aCmd );
    Py_DECREF( par_aCmd );
    par_aCmd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_1_ExecM );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Inc$Util$OS$$$function_2_GetMachineId( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_MachineId = NULL;
    PyObject *var_Str1 = NULL;
    PyObject *var_MacId = NULL;
    struct Nuitka_FrameObject *frame_bdc13e435e043f97be6f630a2256018a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bdc13e435e043f97be6f630a2256018a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bdc13e435e043f97be6f630a2256018a, codeobj_bdc13e435e043f97be6f630a2256018a, module_Inc$Util$OS, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bdc13e435e043f97be6f630a2256018a = cache_frame_bdc13e435e043f97be6f630a2256018a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bdc13e435e043f97be6f630a2256018a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bdc13e435e043f97be6f630a2256018a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_FS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FS" );
            exception_tb = NULL;

            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_bdc13e435e043f97be6f630a2256018a->m_frame.f_lineno = 27;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_LoadFromFileToStr, &PyTuple_GET_ITEM( const_tuple_str_digest_caf952e83ca2ffea8bd10ec869462969_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_MachineId == NULL );
        var_MachineId = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_MachineId );
        tmp_operand_name_1 = var_MachineId;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_str_plain_Unknown;
            {
                PyObject *old = var_MachineId;
                assert( old != NULL );
                var_MachineId = tmp_assign_source_2;
                Py_INCREF( var_MachineId );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_Net );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Net );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Net" );
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_bdc13e435e043f97be6f630a2256018a->m_frame.f_lineno = 31;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_GetMac );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_MacId == NULL );
        var_MacId = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_MacId );
        tmp_operand_name_2 = var_MacId;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_plain_Unknown;
            {
                PyObject *old = var_MacId;
                assert( old != NULL );
                var_MacId = tmp_assign_source_4;
                Py_INCREF( var_MacId );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_MachineId );
            tmp_left_name_1 = var_MachineId;
            CHECK_OBJECT( var_MacId );
            tmp_right_name_1 = var_MacId;
            tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_Str1 == NULL );
            var_Str1 = tmp_assign_source_5;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_MachineId );
            tmp_left_name_2 = var_MachineId;
            CHECK_OBJECT( var_MacId );
            tmp_right_name_2 = var_MacId;
            tmp_called_instance_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_bdc13e435e043f97be6f630a2256018a->m_frame.f_lineno = 38;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_Str1 == NULL );
            var_Str1 = tmp_assign_source_6;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_Str1 );
        tmp_args_element_name_1 = var_Str1;
        frame_bdc13e435e043f97be6f630a2256018a->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_md5, call_args );
        }

        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bdc13e435e043f97be6f630a2256018a->m_frame.f_lineno = 39;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc13e435e043f97be6f630a2256018a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc13e435e043f97be6f630a2256018a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc13e435e043f97be6f630a2256018a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bdc13e435e043f97be6f630a2256018a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bdc13e435e043f97be6f630a2256018a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bdc13e435e043f97be6f630a2256018a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bdc13e435e043f97be6f630a2256018a,
        type_description_1,
        var_MachineId,
        var_Str1,
        var_MacId
    );


    // Release cached frame.
    if ( frame_bdc13e435e043f97be6f630a2256018a == cache_frame_bdc13e435e043f97be6f630a2256018a )
    {
        Py_DECREF( frame_bdc13e435e043f97be6f630a2256018a );
    }
    cache_frame_bdc13e435e043f97be6f630a2256018a = NULL;

    assertFrameObject( frame_bdc13e435e043f97be6f630a2256018a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_2_GetMachineId );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_MachineId );
    Py_DECREF( var_MachineId );
    var_MachineId = NULL;

    CHECK_OBJECT( (PyObject *)var_Str1 );
    Py_DECREF( var_Str1 );
    var_Str1 = NULL;

    CHECK_OBJECT( (PyObject *)var_MacId );
    Py_DECREF( var_MacId );
    var_MacId = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_MachineId );
    var_MachineId = NULL;

    Py_XDECREF( var_Str1 );
    var_Str1 = NULL;

    Py_XDECREF( var_MacId );
    var_MacId = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_2_GetMachineId );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Inc$Util$OS$$$function_3_GetVersion( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9b97a31f1f0a9eaab863ef1b67acf8e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b97a31f1f0a9eaab863ef1b67acf8e8 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_9b97a31f1f0a9eaab863ef1b67acf8e8, codeobj_9b97a31f1f0a9eaab863ef1b67acf8e8, module_Inc$Util$OS, 0 );
    frame_9b97a31f1f0a9eaab863ef1b67acf8e8 = cache_frame_9b97a31f1f0a9eaab863ef1b67acf8e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        tmp_source_name_1 = const_str_digest_76a2a5b8b28f31ac74b8c8c688659b8a;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_version_info );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_major );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_version_info );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_minor );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_3;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_version_info );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_micro );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_9b97a31f1f0a9eaab863ef1b67acf8e8->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b97a31f1f0a9eaab863ef1b67acf8e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b97a31f1f0a9eaab863ef1b67acf8e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b97a31f1f0a9eaab863ef1b67acf8e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b97a31f1f0a9eaab863ef1b67acf8e8,
        type_description_1
    );


    // Release cached frame.
    if ( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 == cache_frame_9b97a31f1f0a9eaab863ef1b67acf8e8 )
    {
        Py_DECREF( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );
    }
    cache_frame_9b97a31f1f0a9eaab863ef1b67acf8e8 = NULL;

    assertFrameObject( frame_9b97a31f1f0a9eaab863ef1b67acf8e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_3_GetVersion );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Inc$Util$OS$$$function_4_GetDiskInfo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aName = python_pars[ 0 ];
    PyObject *var_Disk = NULL;
    struct Nuitka_FrameObject *frame_fda935441413ee4f69903e00ce3420ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fda935441413ee4f69903e00ce3420ed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fda935441413ee4f69903e00ce3420ed, codeobj_fda935441413ee4f69903e00ce3420ed, module_Inc$Util$OS, sizeof(void *)+sizeof(void *) );
    frame_fda935441413ee4f69903e00ce3420ed = cache_frame_fda935441413ee4f69903e00ce3420ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fda935441413ee4f69903e00ce3420ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fda935441413ee4f69903e00ce3420ed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_aName );
        tmp_args_element_name_1 = par_aName;
        frame_fda935441413ee4f69903e00ce3420ed->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_statvfs, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Disk == NULL );
        var_Disk = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_Disk );
        tmp_source_name_1 = var_Disk;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_bsize );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Disk );
        tmp_source_name_2 = var_Disk;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_f_blocks );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyList_New( 2 );
        PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_Disk );
        tmp_source_name_3 = var_Disk;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_bsize );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Disk );
        tmp_source_name_4 = var_Disk;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_bfree );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_return_value, 1, tmp_list_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fda935441413ee4f69903e00ce3420ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fda935441413ee4f69903e00ce3420ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fda935441413ee4f69903e00ce3420ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fda935441413ee4f69903e00ce3420ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fda935441413ee4f69903e00ce3420ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fda935441413ee4f69903e00ce3420ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fda935441413ee4f69903e00ce3420ed,
        type_description_1,
        par_aName,
        var_Disk
    );


    // Release cached frame.
    if ( frame_fda935441413ee4f69903e00ce3420ed == cache_frame_fda935441413ee4f69903e00ce3420ed )
    {
        Py_DECREF( frame_fda935441413ee4f69903e00ce3420ed );
    }
    cache_frame_fda935441413ee4f69903e00ce3420ed = NULL;

    assertFrameObject( frame_fda935441413ee4f69903e00ce3420ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_4_GetDiskInfo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Disk );
    Py_DECREF( var_Disk );
    var_Disk = NULL;

    CHECK_OBJECT( (PyObject *)par_aName );
    Py_DECREF( par_aName );
    par_aName = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_Disk );
    var_Disk = NULL;

    CHECK_OBJECT( (PyObject *)par_aName );
    Py_DECREF( par_aName );
    par_aName = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$OS$$$function_4_GetDiskInfo );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_1_ExecM( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$OS$$$function_1_ExecM,
        const_str_plain_ExecM,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2cefbb5ec40fa3f696a0522d0fe79435,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$OS,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_2_GetMachineId(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$OS$$$function_2_GetMachineId,
        const_str_plain_GetMachineId,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bdc13e435e043f97be6f630a2256018a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$OS,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_3_GetVersion(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$OS$$$function_3_GetVersion,
        const_str_plain_GetVersion,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b97a31f1f0a9eaab863ef1b67acf8e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$OS,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$OS$$$function_4_GetDiskInfo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$OS$$$function_4_GetDiskInfo,
        const_str_plain_GetDiskInfo,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fda935441413ee4f69903e00ce3420ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$OS,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Inc$Util$OS =
{
    PyModuleDef_HEAD_INIT,
    "Inc.Util.OS",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( Inc$Util$OS )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Inc$Util$OS );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("Inc.Util.OS: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Util.OS: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Util.OS: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initInc$Util$OS" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Inc$Util$OS = Py_InitModule4(
        "Inc.Util.OS",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Inc$Util$OS = PyModule_Create( &mdef_Inc$Util$OS );
#endif

    moduledict_Inc$Util$OS = MODULE_DICT( module_Inc$Util$OS );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Inc$Util$OS,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Inc$Util$OS,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Util$OS,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Util$OS,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Inc$Util$OS );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a58090f4a939ac81efbf0fdefd1797e0, module_Inc$Util$OS );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_47c265488b5c4a430e769476020f1e67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ade26fea59a84e8b725866efbaa8d71b;
        UPDATE_STRING_DICT0( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_363ac9fa4b118413aaf58a5b54a939e0;
        UPDATE_STRING_DICT0( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_47c265488b5c4a430e769476020f1e67 = MAKE_MODULE_FRAME( codeobj_47c265488b5c4a430e769476020f1e67, module_Inc$Util$OS );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_47c265488b5c4a430e769476020f1e67 );
    assert( Py_REFCNT( frame_47c265488b5c4a430e769476020f1e67 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_subprocess;
        tmp_globals_name_1 = (PyObject *)moduledict_Inc$Util$OS;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_47c265488b5c4a430e769476020f1e67->m_frame.f_lineno = 9;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_hashlib;
        tmp_globals_name_2 = (PyObject *)moduledict_Inc$Util$OS;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_47c265488b5c4a430e769476020f1e67->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_sys;
        tmp_globals_name_3 = (PyObject *)moduledict_Inc$Util$OS;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_47c265488b5c4a430e769476020f1e67->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_plain_os;
        tmp_globals_name_4 = (PyObject *)moduledict_Inc$Util$OS;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_47c265488b5c4a430e769476020f1e67->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
        tmp_globals_name_5 = (PyObject *)moduledict_Inc$Util$OS;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_FS_tuple;
        frame_47c265488b5c4a430e769476020f1e67->m_frame.f_lineno = 14;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FS );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_FS, tmp_assign_source_7 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_47c265488b5c4a430e769476020f1e67 );
#endif
    popFrameStack();

    assertFrameObject( frame_47c265488b5c4a430e769476020f1e67 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_47c265488b5c4a430e769476020f1e67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_47c265488b5c4a430e769476020f1e67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_47c265488b5c4a430e769476020f1e67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_47c265488b5c4a430e769476020f1e67, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_empty_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_8 = MAKE_FUNCTION_Inc$Util$OS$$$function_1_ExecM( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_ExecM, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_Inc$Util$OS$$$function_2_GetMachineId(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_GetMachineId, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_Inc$Util$OS$$$function_3_GetVersion(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_GetVersion, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_Inc$Util$OS$$$function_4_GetDiskInfo(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain_GetDiskInfo, tmp_assign_source_11 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Inc$Util$OS, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_Inc$Util$OS );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
