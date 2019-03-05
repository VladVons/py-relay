/* Generated code for Python module 'Api.Misc'
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

/* The "_module_Api$Misc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Api$Misc;
PyDictObject *moduledict_Api$Misc;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Time;
extern PyObject *const_str_plain_Disk;
extern PyObject *const_str_plain_Mac;
extern PyObject *const_str_chr_47;
static PyObject *const_str_digest_b51ed2a81318311a98d2bbd4a09301b8;
static PyObject *const_str_digest_418ba194119b96cb924c80b5f63ce486;
extern PyObject *const_str_plain_Version;
static PyObject *const_str_digest_79f223a838230433e026f84eaa64523f;
static PyObject *const_str_digest_4a3471d66a0de98509cc5b509085f0e4;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_579dcc0f6c6e4dcecab4be7e64d110a1;
static PyObject *const_str_plain_Python;
extern PyObject *const_str_plain_Print;
static PyObject *const_str_plain_Platform;
extern PyObject *const_str_plain_Homepage;
static PyObject *const_str_digest_e7dd87c6d28ef2a6a780edbda80d7c1a;
extern PyObject *const_str_plain_Test1;
extern PyObject *const_str_plain_Uptime;
static PyObject *const_str_plain_DiskFree;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_GetVersion;
extern PyObject *const_str_plain_Result;
static PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_str_plain_OS;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Software;
extern PyObject *const_str_plain_Hardware;
extern PyObject *const_str_plain_Obj;
static PyObject *const_str_plain_platform;
static PyObject *const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_int_pos_1048576;
static PyObject *const_str_plain_EMail;
extern PyObject *const_str_plain_GetDiskInfo;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_336c24106240f9f3da39b8438e9f8c48;
static PyObject *const_str_digest_c3c1bf133c157589595720cbc0fed476;
static PyObject *const_str_plain_Author;
static PyObject *const_str_digest_165f85d21dc368f81001b8ed6c563615;
static PyObject *const_str_digest_5d9332a38cad9a3a887045f9925b4e7b;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_94f88b07ddb95e082d93ea796a956621;
extern PyObject *const_str_plain_Date;
extern PyObject *const_str_plain_GetMac;
extern PyObject *const_str_plain_Net;
static PyObject *const_tuple_str_plain_Disk_str_plain_Result_tuple;
static PyObject *const_str_digest_9640de8bdba1a1bcf83c4c82e15e954c;
extern PyObject *const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
static PyObject *const_str_plain_DiskSize;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b51ed2a81318311a98d2bbd4a09301b8 = UNSTREAM_STRING( &constant_bin[ 116 ], 174, 0 );
    const_str_digest_418ba194119b96cb924c80b5f63ce486 = UNSTREAM_STRING( &constant_bin[ 290 ], 28, 0 );
    const_str_digest_79f223a838230433e026f84eaa64523f = UNSTREAM_STRING( &constant_bin[ 318 ], 6, 0 );
    const_str_digest_4a3471d66a0de98509cc5b509085f0e4 = UNSTREAM_STRING( &constant_bin[ 324 ], 5, 0 );
    const_str_digest_579dcc0f6c6e4dcecab4be7e64d110a1 = UNSTREAM_STRING( &constant_bin[ 329 ], 14, 0 );
    const_str_plain_Python = UNSTREAM_STRING( &constant_bin[ 343 ], 6, 1 );
    const_str_plain_Platform = UNSTREAM_STRING( &constant_bin[ 349 ], 8, 1 );
    const_str_digest_e7dd87c6d28ef2a6a780edbda80d7c1a = UNSTREAM_STRING( &constant_bin[ 357 ], 8, 0 );
    const_str_plain_DiskFree = UNSTREAM_STRING( &constant_bin[ 365 ], 8, 1 );
    const_tuple_str_chr_47_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_47_tuple, 0, const_str_chr_47 ); Py_INCREF( const_str_chr_47 );
    const_str_plain_OS = UNSTREAM_STRING( &constant_bin[ 373 ], 2, 1 );
    const_str_plain_platform = UNSTREAM_STRING( &constant_bin[ 375 ], 8, 1 );
    const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple, 0, const_str_plain_Obj ); Py_INCREF( const_str_plain_Obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple, 1, const_str_plain_Time ); Py_INCREF( const_str_plain_Time );
    PyTuple_SET_ITEM( const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple, 2, const_str_plain_Net ); Py_INCREF( const_str_plain_Net );
    PyTuple_SET_ITEM( const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple, 3, const_str_plain_OS ); Py_INCREF( const_str_plain_OS );
    const_int_pos_1048576 = PyInt_FromLong( 1048576l );
    const_str_plain_EMail = UNSTREAM_STRING( &constant_bin[ 383 ], 5, 1 );
    const_str_digest_336c24106240f9f3da39b8438e9f8c48 = UNSTREAM_STRING( &constant_bin[ 186 ], 18, 0 );
    const_str_digest_c3c1bf133c157589595720cbc0fed476 = UNSTREAM_STRING( &constant_bin[ 388 ], 6, 0 );
    const_str_plain_Author = UNSTREAM_STRING( &constant_bin[ 158 ], 6, 1 );
    const_str_digest_165f85d21dc368f81001b8ed6c563615 = UNSTREAM_STRING( &constant_bin[ 394 ], 10, 0 );
    const_str_digest_5d9332a38cad9a3a887045f9925b4e7b = UNSTREAM_STRING( &constant_bin[ 404 ], 52, 0 );
    const_str_digest_94f88b07ddb95e082d93ea796a956621 = UNSTREAM_STRING( &constant_bin[ 456 ], 17, 0 );
    const_tuple_str_plain_Disk_str_plain_Result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Disk_str_plain_Result_tuple, 0, const_str_plain_Disk ); Py_INCREF( const_str_plain_Disk );
    PyTuple_SET_ITEM( const_tuple_str_plain_Disk_str_plain_Result_tuple, 1, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_digest_9640de8bdba1a1bcf83c4c82e15e954c = UNSTREAM_STRING( &constant_bin[ 473 ], 12, 0 );
    const_str_plain_DiskSize = UNSTREAM_STRING( &constant_bin[ 485 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Api$Misc( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_23b7cedf521334ef42eeb780a90fcc9c;
static PyCodeObject *codeobj_6940a7e943cb0ae448eb3cc738b0769c;
static PyCodeObject *codeobj_98ae052df2b7a8f8ff973cf838f06167;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5d9332a38cad9a3a887045f9925b4e7b;
    codeobj_23b7cedf521334ef42eeb780a90fcc9c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_94f88b07ddb95e082d93ea796a956621, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6940a7e943cb0ae448eb3cc738b0769c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Print, 35, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_98ae052df2b7a8f8ff973cf838f06167 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Version, 14, const_tuple_str_plain_Disk_str_plain_Result_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Api$Misc$$$function_1_Version(  );


static PyObject *MAKE_FUNCTION_Api$Misc$$$function_2_Print(  );


// The module function definitions.
static PyObject *impl_Api$Misc$$$function_1_Version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_Disk = NULL;
    PyObject *var_Result = NULL;
    struct Nuitka_FrameObject *frame_98ae052df2b7a8f8ff973cf838f06167;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_98ae052df2b7a8f8ff973cf838f06167 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_98ae052df2b7a8f8ff973cf838f06167, codeobj_98ae052df2b7a8f8ff973cf838f06167, module_Api$Misc, sizeof(void *)+sizeof(void *) );
    frame_98ae052df2b7a8f8ff973cf838f06167 = cache_frame_98ae052df2b7a8f8ff973cf838f06167;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_98ae052df2b7a8f8ff973cf838f06167 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_98ae052df2b7a8f8ff973cf838f06167 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_OS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OS" );
            exception_tb = NULL;

            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_98ae052df2b7a8f8ff973cf838f06167->m_frame.f_lineno = 15;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_GetDiskInfo, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Disk == NULL );
        var_Disk = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_4;
        tmp_dict_value_1 = const_str_digest_165f85d21dc368f81001b8ed6c563615;
        tmp_dict_key_1 = const_str_plain_Date;
        tmp_assign_source_2 = _PyDict_NewPresized( 12 );
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_str_digest_c3c1bf133c157589595720cbc0fed476;
        tmp_dict_key_2 = const_str_plain_Software;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_3 = const_str_digest_4a3471d66a0de98509cc5b509085f0e4;
        tmp_dict_key_3 = const_str_plain_Hardware;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_4 = const_str_digest_579dcc0f6c6e4dcecab4be7e64d110a1;
        tmp_dict_key_4 = const_str_plain_Author;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_5 = const_str_digest_336c24106240f9f3da39b8438e9f8c48;
        tmp_dict_key_5 = const_str_plain_EMail;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_6 = const_str_digest_418ba194119b96cb924c80b5f63ce486;
        tmp_dict_key_6 = const_str_plain_Homepage;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_Platform;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_OS );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OS );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OS" );
            exception_tb = NULL;

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        frame_98ae052df2b7a8f8ff973cf838f06167->m_frame.f_lineno = 25;
        tmp_dict_value_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_GetVersion );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = const_str_plain_Python;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Time );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Time );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Time" );
            exception_tb = NULL;

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        frame_98ae052df2b7a8f8ff973cf838f06167->m_frame.f_lineno = 26;
        tmp_dict_value_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_Uptime );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = const_str_plain_Uptime;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Net );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Net );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Net" );
            exception_tb = NULL;

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        frame_98ae052df2b7a8f8ff973cf838f06167->m_frame.f_lineno = 27;
        tmp_dict_value_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_GetMac );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_str_plain_Mac;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_left_name_1 = const_str_digest_79f223a838230433e026f84eaa64523f;
        CHECK_OBJECT( var_Disk );
        tmp_subscribed_name_1 = var_Disk;
        tmp_subscript_name_1 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1048576;
        tmp_right_name_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = const_str_plain_DiskSize;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_left_name_3 = const_str_digest_79f223a838230433e026f84eaa64523f;
        CHECK_OBJECT( var_Disk );
        tmp_subscribed_name_2 = var_Disk;
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1048576;
        tmp_right_name_3 = BINARY_OPERATION_DIV( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = const_str_plain_DiskFree;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        assert( var_Result == NULL );
        var_Result = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98ae052df2b7a8f8ff973cf838f06167 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98ae052df2b7a8f8ff973cf838f06167 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98ae052df2b7a8f8ff973cf838f06167, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98ae052df2b7a8f8ff973cf838f06167->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98ae052df2b7a8f8ff973cf838f06167, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_98ae052df2b7a8f8ff973cf838f06167,
        type_description_1,
        var_Disk,
        var_Result
    );


    // Release cached frame.
    if ( frame_98ae052df2b7a8f8ff973cf838f06167 == cache_frame_98ae052df2b7a8f8ff973cf838f06167 )
    {
        Py_DECREF( frame_98ae052df2b7a8f8ff973cf838f06167 );
    }
    cache_frame_98ae052df2b7a8f8ff973cf838f06167 = NULL;

    assertFrameObject( frame_98ae052df2b7a8f8ff973cf838f06167 );

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
    NUITKA_CANNOT_GET_HERE( Api$Misc$$$function_1_Version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Disk );
    Py_DECREF( var_Disk );
    var_Disk = NULL;

    CHECK_OBJECT( (PyObject *)var_Result );
    Py_DECREF( var_Result );
    var_Result = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Api$Misc$$$function_1_Version );
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


static PyObject *impl_Api$Misc$$$function_2_Print( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6940a7e943cb0ae448eb3cc738b0769c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_print_value;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6940a7e943cb0ae448eb3cc738b0769c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6940a7e943cb0ae448eb3cc738b0769c, codeobj_6940a7e943cb0ae448eb3cc738b0769c, module_Api$Misc, sizeof(void *) );
    frame_6940a7e943cb0ae448eb3cc738b0769c = cache_frame_6940a7e943cb0ae448eb3cc738b0769c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6940a7e943cb0ae448eb3cc738b0769c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6940a7e943cb0ae448eb3cc738b0769c ) == 2 ); // Frame stack

    // Framed code:
    tmp_print_value = const_str_digest_9640de8bdba1a1bcf83c4c82e15e954c;
    tmp_result = PRINT_ITEM( tmp_print_value );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6940a7e943cb0ae448eb3cc738b0769c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6940a7e943cb0ae448eb3cc738b0769c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6940a7e943cb0ae448eb3cc738b0769c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6940a7e943cb0ae448eb3cc738b0769c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6940a7e943cb0ae448eb3cc738b0769c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6940a7e943cb0ae448eb3cc738b0769c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6940a7e943cb0ae448eb3cc738b0769c == cache_frame_6940a7e943cb0ae448eb3cc738b0769c )
    {
        Py_DECREF( frame_6940a7e943cb0ae448eb3cc738b0769c );
    }
    cache_frame_6940a7e943cb0ae448eb3cc738b0769c = NULL;

    assertFrameObject( frame_6940a7e943cb0ae448eb3cc738b0769c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Api$Misc$$$function_2_Print );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Api$Misc$$$function_2_Print );
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



static PyObject *MAKE_FUNCTION_Api$Misc$$$function_1_Version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Api$Misc$$$function_1_Version,
        const_str_plain_Version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_98ae052df2b7a8f8ff973cf838f06167,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Api$Misc,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Api$Misc$$$function_2_Print(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Api$Misc$$$function_2_Print,
        const_str_plain_Print,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6940a7e943cb0ae448eb3cc738b0769c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Api$Misc,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Api$Misc =
{
    PyModuleDef_HEAD_INIT,
    "Api.Misc",
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

MOD_INIT_DECL( Api$Misc )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Api$Misc );
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
    puts("Api.Misc: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Api.Misc: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Api.Misc: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initApi$Misc" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Api$Misc = Py_InitModule4(
        "Api.Misc",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Api$Misc = PyModule_Create( &mdef_Api$Misc );
#endif

    moduledict_Api$Misc = MODULE_DICT( module_Api$Misc );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Api$Misc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Api$Misc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Api$Misc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Api$Misc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Api$Misc );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e7dd87c6d28ef2a6a780edbda80d7c1a, module_Api$Misc );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_Api$Misc_34_key_Print = NULL;
    struct Nuitka_FrameObject *frame_23b7cedf521334ef42eeb780a90fcc9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b51ed2a81318311a98d2bbd4a09301b8;
        UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5d9332a38cad9a3a887045f9925b4e7b;
        UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_Api$Misc;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_23b7cedf521334ef42eeb780a90fcc9c = MAKE_MODULE_FRAME( codeobj_23b7cedf521334ef42eeb780a90fcc9c, module_Api$Misc );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_23b7cedf521334ef42eeb780a90fcc9c );
    assert( Py_REFCNT( frame_23b7cedf521334ef42eeb780a90fcc9c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
        tmp_globals_name_2 = (PyObject *)moduledict_Api$Misc;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Obj_str_plain_Time_str_plain_Net_str_plain_OS_tuple;
        frame_23b7cedf521334ef42eeb780a90fcc9c->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Obj );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Obj, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Time );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Time, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Net );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Net, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_OS );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_OS, tmp_assign_source_8 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_Api$Misc$$$function_1_Version(  );



        UPDATE_STRING_DICT1( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Version, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_Api$Misc$$$function_2_Print(  );



            assert( tmp_locals_Api$Misc_34_key_Print == NULL );
            tmp_locals_Api$Misc_34_key_Print = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_value_1 = const_str_digest_e7dd87c6d28ef2a6a780edbda80d7c1a;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_10 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Api$Misc_34_key_Print );
            tmp_dict_value_2 = tmp_locals_Api$Misc_34_key_Print;
            tmp_dict_key_2 = const_str_plain_Print;
            tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Api$Misc );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Api$Misc_34_key_Print );
        Py_DECREF( tmp_locals_Api$Misc_34_key_Print );
        tmp_locals_Api$Misc_34_key_Print = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Api$Misc );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = const_str_plain___metaclass__;
        tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___metaclass__ );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                exception_tb = NULL;

                exception_lineno = 34;

                goto try_except_handler_4;
            }

            tmp_assign_source_12 = tmp_mvar_value_1;
            Py_INCREF( tmp_assign_source_12 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Api$Misc );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );
        tmp_assign_source_12 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_12 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Api$Misc );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_Test1;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_23b7cedf521334ef42eeb780a90fcc9c->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_13;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b7cedf521334ef42eeb780a90fcc9c );
#endif
    popFrameStack();

    assertFrameObject( frame_23b7cedf521334ef42eeb780a90fcc9c );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b7cedf521334ef42eeb780a90fcc9c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23b7cedf521334ef42eeb780a90fcc9c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23b7cedf521334ef42eeb780a90fcc9c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23b7cedf521334ef42eeb780a90fcc9c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain_Test1, tmp_assign_source_14 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Api$Misc, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Api$Misc );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
