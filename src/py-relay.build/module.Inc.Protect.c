/* Generated code for Python module 'Inc.Protect'
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

/* The "_module_Inc$Protect" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Inc$Protect;
PyDictObject *moduledict_Inc$Protect;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_GetSerialCrypted;
extern PyObject *const_str_plain_aData;
static PyObject *const_str_digest_677a815cba2671c0f445ca2bee3f50b8;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_LoadKeyStr;
static PyObject *const_str_plain_Info;
extern PyObject *const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
extern PyObject *const_str_plain_FS;
extern PyObject *const_str_plain_LoadKeyFile;
static PyObject *const_str_digest_8046f0722d04f1d0355b0e57893aeb43;
static PyObject *const_str_digest_735927749de828fb992db76711ae3b79;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_Encode;
extern PyObject *const_str_plain_Print;
extern PyObject *const_tuple_str_plain_Log_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_Result;
extern PyObject *const_str_plain_LoadFromFileToStr;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_Hard_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_Data_tuple;
static PyObject *const_str_digest_d8c81c00d4dd027077895aee36f69a29;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_self_str_plain_Result_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_FS_str_plain_Net_tuple;
extern PyObject *const_str_plain_FileExists;
static PyObject *const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple;
static PyObject *const_str_plain_Hard;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_TProtect;
extern PyObject *const_str_plain_Check;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_aFile;
extern PyObject *const_str_plain_Data;
extern PyObject *const_str_digest_bf31fbca22bb3b1bbc45444e386bf3bf;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_GetSerial;
extern PyObject *const_str_plain_dumps;
extern PyObject *const_str_plain_Log;
extern PyObject *const_str_digest_3394dfb307e06a954b858974260bf51d;
extern PyObject *const_str_digest_512956f71065199b4656d61ab6cfc176;
static PyObject *const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple;
extern PyObject *const_str_plain_e;
static PyObject *const_tuple_str_plain_TCrypt_tuple;
static PyObject *const_str_plain_StrInfo;
extern PyObject *const_str_plain_json;
extern PyObject *const_str_plain_GetMac;
extern PyObject *const_str_plain_KeyFile;
extern PyObject *const_str_digest_27640573b8ce8850308523955531ea59;
extern PyObject *const_str_plain_Net;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_e1a8a358aeb62e9ff72f9dd1917a704f;
extern PyObject *const_str_plain_loads;
static PyObject *const_str_plain_Crypt;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_Decode;
extern PyObject *const_str_plain_TCrypt;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_GetSerialCrypted = UNSTREAM_STRING( &constant_bin[ 19991 ], 16, 1 );
    const_str_digest_677a815cba2671c0f445ca2bee3f50b8 = UNSTREAM_STRING( &constant_bin[ 20007 ], 55, 0 );
    const_str_plain_LoadKeyStr = UNSTREAM_STRING( &constant_bin[ 20062 ], 10, 1 );
    const_str_plain_Info = UNSTREAM_STRING( &constant_bin[ 2191 ], 4, 1 );
    const_str_digest_8046f0722d04f1d0355b0e57893aeb43 = UNSTREAM_STRING( &constant_bin[ 20072 ], 26, 0 );
    const_str_digest_735927749de828fb992db76711ae3b79 = UNSTREAM_STRING( &constant_bin[ 20098 ], 21, 0 );
    const_tuple_str_plain_Hard_tuple = PyTuple_New( 1 );
    const_str_plain_Hard = UNSTREAM_STRING( &constant_bin[ 20098 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Hard_tuple, 0, const_str_plain_Hard ); Py_INCREF( const_str_plain_Hard );
    const_tuple_str_plain_self_str_plain_Data_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_Data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_Data_tuple, 1, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    const_str_digest_d8c81c00d4dd027077895aee36f69a29 = UNSTREAM_STRING( &constant_bin[ 20119 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_Result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_Result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_Result_tuple, 1, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_tuple_str_plain_FS_str_plain_Net_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FS_str_plain_Net_tuple, 0, const_str_plain_FS ); Py_INCREF( const_str_plain_FS );
    PyTuple_SET_ITEM( const_tuple_str_plain_FS_str_plain_Net_tuple, 1, const_str_plain_Net ); Py_INCREF( const_str_plain_Net );
    const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple, 1, const_str_plain_aFile ); Py_INCREF( const_str_plain_aFile );
    PyTuple_SET_ITEM( const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple, 2, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    PyTuple_SET_ITEM( const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple, 3, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple, 1, const_str_plain_aData ); Py_INCREF( const_str_plain_aData );
    const_str_plain_StrInfo = UNSTREAM_STRING( &constant_bin[ 20145 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple, 2, const_str_plain_StrInfo ); Py_INCREF( const_str_plain_StrInfo );
    const_tuple_str_plain_TCrypt_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TCrypt_tuple, 0, const_str_plain_TCrypt ); Py_INCREF( const_str_plain_TCrypt );
    const_str_digest_e1a8a358aeb62e9ff72f9dd1917a704f = UNSTREAM_STRING( &constant_bin[ 20152 ], 20, 0 );
    const_str_plain_Crypt = UNSTREAM_STRING( &constant_bin[ 2664 ], 5, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Inc$Protect( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_323ab0af744989d8673aa81c6a2e1220;
static PyCodeObject *codeobj_9547650dc3123a6d0c563fce73098f8c;
static PyCodeObject *codeobj_89f62666a30543154c3fb1b7c162bd5f;
static PyCodeObject *codeobj_c94da07a540bdad858d0d6e70dc5c083;
static PyCodeObject *codeobj_5b7920eb711001c7137e597fea136712;
static PyCodeObject *codeobj_854a6502cb60e1b5d327ae3cea3571bd;
static PyCodeObject *codeobj_9e9b358f56676d18ca8a4c2485b7ab97;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_677a815cba2671c0f445ca2bee3f50b8;
    codeobj_323ab0af744989d8673aa81c6a2e1220 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e1a8a358aeb62e9ff72f9dd1917a704f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_9547650dc3123a6d0c563fce73098f8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Check, 46, const_tuple_str_plain_self_str_plain_Result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89f62666a30543154c3fb1b7c162bd5f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetSerial, 22, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c94da07a540bdad858d0d6e70dc5c083 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetSerialCrypted, 25, const_tuple_str_plain_self_str_plain_Data_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b7920eb711001c7137e597fea136712 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LoadKeyFile, 37, const_tuple_977f3295ee9c892a229ee35f521f0f3d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_854a6502cb60e1b5d327ae3cea3571bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LoadKeyStr, 29, const_tuple_str_plain_self_str_plain_aData_str_plain_StrInfo_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e9b358f56676d18ca8a4c2485b7ab97 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 18, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_2_GetSerial(  );


static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_3_GetSerialCrypted(  );


static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_4_LoadKeyStr(  );


static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_5_LoadKeyFile(  );


static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_6_Check(  );


// The module function definitions.
static PyObject *impl_Inc$Protect$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9e9b358f56676d18ca8a4c2485b7ab97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9e9b358f56676d18ca8a4c2485b7ab97 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e9b358f56676d18ca8a4c2485b7ab97, codeobj_9e9b358f56676d18ca8a4c2485b7ab97, module_Inc$Protect, sizeof(void *) );
    frame_9e9b358f56676d18ca8a4c2485b7ab97 = cache_frame_9e9b358f56676d18ca8a4c2485b7ab97;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e9b358f56676d18ca8a4c2485b7ab97 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e9b358f56676d18ca8a4c2485b7ab97 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_TCrypt );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TCrypt );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "TCrypt" );
            exception_tb = NULL;

            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_9e9b358f56676d18ca8a4c2485b7ab97->m_frame.f_lineno = 19;
        tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_Crypt, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_Info, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e9b358f56676d18ca8a4c2485b7ab97 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e9b358f56676d18ca8a4c2485b7ab97 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e9b358f56676d18ca8a4c2485b7ab97, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e9b358f56676d18ca8a4c2485b7ab97->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e9b358f56676d18ca8a4c2485b7ab97, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e9b358f56676d18ca8a4c2485b7ab97,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9e9b358f56676d18ca8a4c2485b7ab97 == cache_frame_9e9b358f56676d18ca8a4c2485b7ab97 )
    {
        Py_DECREF( frame_9e9b358f56676d18ca8a4c2485b7ab97 );
    }
    cache_frame_9e9b358f56676d18ca8a4c2485b7ab97 = NULL;

    assertFrameObject( frame_9e9b358f56676d18ca8a4c2485b7ab97 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_1___init__ );
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


static PyObject *impl_Inc$Protect$$$function_2_GetSerial( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_89f62666a30543154c3fb1b7c162bd5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89f62666a30543154c3fb1b7c162bd5f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89f62666a30543154c3fb1b7c162bd5f, codeobj_89f62666a30543154c3fb1b7c162bd5f, module_Inc$Protect, sizeof(void *) );
    frame_89f62666a30543154c3fb1b7c162bd5f = cache_frame_89f62666a30543154c3fb1b7c162bd5f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89f62666a30543154c3fb1b7c162bd5f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89f62666a30543154c3fb1b7c162bd5f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Net );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Net );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Net" );
            exception_tb = NULL;

            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_89f62666a30543154c3fb1b7c162bd5f->m_frame.f_lineno = 23;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_GetMac );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89f62666a30543154c3fb1b7c162bd5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89f62666a30543154c3fb1b7c162bd5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89f62666a30543154c3fb1b7c162bd5f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89f62666a30543154c3fb1b7c162bd5f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89f62666a30543154c3fb1b7c162bd5f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89f62666a30543154c3fb1b7c162bd5f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89f62666a30543154c3fb1b7c162bd5f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_89f62666a30543154c3fb1b7c162bd5f == cache_frame_89f62666a30543154c3fb1b7c162bd5f )
    {
        Py_DECREF( frame_89f62666a30543154c3fb1b7c162bd5f );
    }
    cache_frame_89f62666a30543154c3fb1b7c162bd5f = NULL;

    assertFrameObject( frame_89f62666a30543154c3fb1b7c162bd5f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_2_GetSerial );
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
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_2_GetSerial );
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


static PyObject *impl_Inc$Protect$$$function_3_GetSerialCrypted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_Data = NULL;
    struct Nuitka_FrameObject *frame_c94da07a540bdad858d0d6e70dc5c083;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c94da07a540bdad858d0d6e70dc5c083 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c94da07a540bdad858d0d6e70dc5c083, codeobj_c94da07a540bdad858d0d6e70dc5c083, module_Inc$Protect, sizeof(void *)+sizeof(void *) );
    frame_c94da07a540bdad858d0d6e70dc5c083 = cache_frame_c94da07a540bdad858d0d6e70dc5c083;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c94da07a540bdad858d0d6e70dc5c083 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c94da07a540bdad858d0d6e70dc5c083 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_c94da07a540bdad858d0d6e70dc5c083->m_frame.f_lineno = 26;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_GetSerial );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_Hard;
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        assert( var_Data == NULL );
        var_Data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Crypt );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Encode );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_json );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_json );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "json" );
            exception_tb = NULL;

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_Data );
        tmp_args_element_name_2 = var_Data;
        frame_c94da07a540bdad858d0d6e70dc5c083->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dumps, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c94da07a540bdad858d0d6e70dc5c083->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94da07a540bdad858d0d6e70dc5c083 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94da07a540bdad858d0d6e70dc5c083 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c94da07a540bdad858d0d6e70dc5c083 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c94da07a540bdad858d0d6e70dc5c083, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c94da07a540bdad858d0d6e70dc5c083->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c94da07a540bdad858d0d6e70dc5c083, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c94da07a540bdad858d0d6e70dc5c083,
        type_description_1,
        par_self,
        var_Data
    );


    // Release cached frame.
    if ( frame_c94da07a540bdad858d0d6e70dc5c083 == cache_frame_c94da07a540bdad858d0d6e70dc5c083 )
    {
        Py_DECREF( frame_c94da07a540bdad858d0d6e70dc5c083 );
    }
    cache_frame_c94da07a540bdad858d0d6e70dc5c083 = NULL;

    assertFrameObject( frame_c94da07a540bdad858d0d6e70dc5c083 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_3_GetSerialCrypted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_Data );
    Py_DECREF( var_Data );
    var_Data = NULL;

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

    Py_XDECREF( var_Data );
    var_Data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_3_GetSerialCrypted );
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


static PyObject *impl_Inc$Protect$$$function_4_LoadKeyStr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aData = python_pars[ 1 ];
    PyObject *var_StrInfo = NULL;
    struct Nuitka_FrameObject *frame_854a6502cb60e1b5d327ae3cea3571bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_854a6502cb60e1b5d327ae3cea3571bd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_854a6502cb60e1b5d327ae3cea3571bd, codeobj_854a6502cb60e1b5d327ae3cea3571bd, module_Inc$Protect, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_854a6502cb60e1b5d327ae3cea3571bd = cache_frame_854a6502cb60e1b5d327ae3cea3571bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_854a6502cb60e1b5d327ae3cea3571bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_854a6502cb60e1b5d327ae3cea3571bd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_Info, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Crypt );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_aData );
        tmp_args_element_name_1 = par_aData;
        frame_854a6502cb60e1b5d327ae3cea3571bd->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Decode, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( var_StrInfo == NULL );
        var_StrInfo = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_json );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_json );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "json" );
            exception_tb = NULL;

            exception_lineno = 33;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_StrInfo );
        tmp_args_element_name_2 = var_StrInfo;
        frame_854a6502cb60e1b5d327ae3cea3571bd->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_loads, call_args );
        }

        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_Info, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_854a6502cb60e1b5d327ae3cea3571bd );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_854a6502cb60e1b5d327ae3cea3571bd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_854a6502cb60e1b5d327ae3cea3571bd, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Log );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Log );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Log" );
            exception_tb = NULL;

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Print );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_int_pos_1;
        tmp_args_element_name_4 = const_str_plain_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = const_str_digest_d8c81c00d4dd027077895aee36f69a29;
        frame_854a6502cb60e1b5d327ae3cea3571bd->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_4_LoadKeyStr );
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_854a6502cb60e1b5d327ae3cea3571bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_854a6502cb60e1b5d327ae3cea3571bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_854a6502cb60e1b5d327ae3cea3571bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_854a6502cb60e1b5d327ae3cea3571bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_854a6502cb60e1b5d327ae3cea3571bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_854a6502cb60e1b5d327ae3cea3571bd,
        type_description_1,
        par_self,
        par_aData,
        var_StrInfo
    );


    // Release cached frame.
    if ( frame_854a6502cb60e1b5d327ae3cea3571bd == cache_frame_854a6502cb60e1b5d327ae3cea3571bd )
    {
        Py_DECREF( frame_854a6502cb60e1b5d327ae3cea3571bd );
    }
    cache_frame_854a6502cb60e1b5d327ae3cea3571bd = NULL;

    assertFrameObject( frame_854a6502cb60e1b5d327ae3cea3571bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_4_LoadKeyStr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aData );
    Py_DECREF( par_aData );
    par_aData = NULL;

    Py_XDECREF( var_StrInfo );
    var_StrInfo = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aData );
    Py_DECREF( par_aData );
    par_aData = NULL;

    Py_XDECREF( var_StrInfo );
    var_StrInfo = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_4_LoadKeyStr );
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


static PyObject *impl_Inc$Protect$$$function_5_LoadKeyFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aFile = python_pars[ 1 ];
    PyObject *var_Data = NULL;
    PyObject *var_Result = NULL;
    struct Nuitka_FrameObject *frame_5b7920eb711001c7137e597fea136712;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b7920eb711001c7137e597fea136712 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b7920eb711001c7137e597fea136712, codeobj_5b7920eb711001c7137e597fea136712, module_Inc$Protect, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5b7920eb711001c7137e597fea136712 = cache_frame_5b7920eb711001c7137e597fea136712;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b7920eb711001c7137e597fea136712 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b7920eb711001c7137e597fea136712 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_FS );

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

            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_aFile );
        tmp_args_element_name_1 = par_aFile;
        frame_5b7920eb711001c7137e597fea136712->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_FileExists, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Result == NULL );
        var_Result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_Result );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_Result );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_FS );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FS );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "FS" );
                exception_tb = NULL;

                exception_lineno = 40;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_aFile );
            tmp_args_element_name_2 = par_aFile;
            frame_5b7920eb711001c7137e597fea136712->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_LoadFromFileToStr, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_Data == NULL );
            var_Data = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            CHECK_OBJECT( var_Data );
            tmp_args_element_name_3 = var_Data;
            frame_5b7920eb711001c7137e597fea136712->m_frame.f_lineno = 41;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_LoadKeyStr, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Log );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Log );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Log" );
                exception_tb = NULL;

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Print );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_int_pos_1;
            tmp_args_element_name_5 = const_str_plain_e;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = const_str_digest_8046f0722d04f1d0355b0e57893aeb43;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_KeyFile );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KeyFile );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "KeyFile" );
                exception_tb = NULL;

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = tmp_mvar_value_4;
            tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_5b7920eb711001c7137e597fea136712->m_frame.f_lineno = 43;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b7920eb711001c7137e597fea136712 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b7920eb711001c7137e597fea136712 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b7920eb711001c7137e597fea136712, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b7920eb711001c7137e597fea136712->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b7920eb711001c7137e597fea136712, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b7920eb711001c7137e597fea136712,
        type_description_1,
        par_self,
        par_aFile,
        var_Data,
        var_Result
    );


    // Release cached frame.
    if ( frame_5b7920eb711001c7137e597fea136712 == cache_frame_5b7920eb711001c7137e597fea136712 )
    {
        Py_DECREF( frame_5b7920eb711001c7137e597fea136712 );
    }
    cache_frame_5b7920eb711001c7137e597fea136712 = NULL;

    assertFrameObject( frame_5b7920eb711001c7137e597fea136712 );

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
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_5_LoadKeyFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)par_aFile );
    Py_DECREF( par_aFile );
    par_aFile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)par_aFile );
    Py_DECREF( par_aFile );
    par_aFile = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_5_LoadKeyFile );
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


static PyObject *impl_Inc$Protect$$$function_6_Check( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_Result = NULL;
    struct Nuitka_FrameObject *frame_9547650dc3123a6d0c563fce73098f8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9547650dc3123a6d0c563fce73098f8c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9547650dc3123a6d0c563fce73098f8c, codeobj_9547650dc3123a6d0c563fce73098f8c, module_Inc$Protect, sizeof(void *)+sizeof(void *) );
    frame_9547650dc3123a6d0c563fce73098f8c = cache_frame_9547650dc3123a6d0c563fce73098f8c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9547650dc3123a6d0c563fce73098f8c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9547650dc3123a6d0c563fce73098f8c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_9547650dc3123a6d0c563fce73098f8c->m_frame.f_lineno = 47;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_GetSerial );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Info );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9547650dc3123a6d0c563fce73098f8c->m_frame.f_lineno = 47;
        tmp_compexpr_right_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_Hard_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_Result == NULL );
        var_Result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_Result );
        tmp_operand_name_1 = var_Result;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Log );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Log );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Log" );
                exception_tb = NULL;

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Print );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = const_int_pos_1;
            tmp_args_element_name_2 = const_str_plain_e;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = const_str_digest_735927749de828fb992db76711ae3b79;
            frame_9547650dc3123a6d0c563fce73098f8c->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9547650dc3123a6d0c563fce73098f8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9547650dc3123a6d0c563fce73098f8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9547650dc3123a6d0c563fce73098f8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9547650dc3123a6d0c563fce73098f8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9547650dc3123a6d0c563fce73098f8c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9547650dc3123a6d0c563fce73098f8c,
        type_description_1,
        par_self,
        var_Result
    );


    // Release cached frame.
    if ( frame_9547650dc3123a6d0c563fce73098f8c == cache_frame_9547650dc3123a6d0c563fce73098f8c )
    {
        Py_DECREF( frame_9547650dc3123a6d0c563fce73098f8c );
    }
    cache_frame_9547650dc3123a6d0c563fce73098f8c = NULL;

    assertFrameObject( frame_9547650dc3123a6d0c563fce73098f8c );

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
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_6_Check );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Protect$$$function_6_Check );
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



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e9b358f56676d18ca8a4c2485b7ab97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_2_GetSerial(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_2_GetSerial,
        const_str_plain_GetSerial,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89f62666a30543154c3fb1b7c162bd5f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_3_GetSerialCrypted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_3_GetSerialCrypted,
        const_str_plain_GetSerialCrypted,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c94da07a540bdad858d0d6e70dc5c083,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_4_LoadKeyStr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_4_LoadKeyStr,
        const_str_plain_LoadKeyStr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_854a6502cb60e1b5d327ae3cea3571bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_5_LoadKeyFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_5_LoadKeyFile,
        const_str_plain_LoadKeyFile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b7920eb711001c7137e597fea136712,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Protect$$$function_6_Check(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Protect$$$function_6_Check,
        const_str_plain_Check,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9547650dc3123a6d0c563fce73098f8c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Protect,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Inc$Protect =
{
    PyModuleDef_HEAD_INIT,
    "Inc.Protect",
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

MOD_INIT_DECL( Inc$Protect )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Inc$Protect );
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
    puts("Inc.Protect: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Protect: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Protect: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initInc$Protect" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Inc$Protect = Py_InitModule4(
        "Inc.Protect",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Inc$Protect = PyModule_Create( &mdef_Inc$Protect );
#endif

    moduledict_Inc$Protect = MODULE_DICT( module_Inc$Protect );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Inc$Protect,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Inc$Protect,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Protect,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Protect,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Inc$Protect );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3394dfb307e06a954b858974260bf51d, module_Inc$Protect );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key_Check = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key_GetSerial = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key_GetSerialCrypted = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key_LoadKeyFile = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key_LoadKeyStr = NULL;
    PyObject *tmp_locals_Inc$Protect_17_key___init__ = NULL;
    struct Nuitka_FrameObject *frame_323ab0af744989d8673aa81c6a2e1220;
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
        tmp_assign_source_1 = const_str_digest_27640573b8ce8850308523955531ea59;
        UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_677a815cba2671c0f445ca2bee3f50b8;
        UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_323ab0af744989d8673aa81c6a2e1220 = MAKE_MODULE_FRAME( codeobj_323ab0af744989d8673aa81c6a2e1220, module_Inc$Protect );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_323ab0af744989d8673aa81c6a2e1220 );
    assert( Py_REFCNT( frame_323ab0af744989d8673aa81c6a2e1220 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_json;
        tmp_globals_name_1 = (PyObject *)moduledict_Inc$Protect;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_323ab0af744989d8673aa81c6a2e1220->m_frame.f_lineno = 10;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_digest_bf31fbca22bb3b1bbc45444e386bf3bf;
        tmp_globals_name_2 = (PyObject *)moduledict_Inc$Protect;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Log_tuple;
        frame_323ab0af744989d8673aa81c6a2e1220->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Log );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Log, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_digest_9aab03a7c38b52b642ae4b5d35cda670;
        tmp_globals_name_3 = (PyObject *)moduledict_Inc$Protect;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_FS_str_plain_Net_tuple;
        frame_323ab0af744989d8673aa81c6a2e1220->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_FS );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_FS, tmp_assign_source_6 );
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


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_Net, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_digest_512956f71065199b4656d61ab6cfc176;
        tmp_globals_name_4 = (PyObject *)moduledict_Inc$Protect;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_TCrypt_tuple;
        frame_323ab0af744989d8673aa81c6a2e1220->m_frame.f_lineno = 14;
        tmp_import_name_from_4 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_TCrypt );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_TCrypt, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_Inc$Protect$$$function_1___init__(  );



            assert( tmp_locals_Inc$Protect_17_key___init__ == NULL );
            tmp_locals_Inc$Protect_17_key___init__ = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_Inc$Protect$$$function_2_GetSerial(  );



            assert( tmp_locals_Inc$Protect_17_key_GetSerial == NULL );
            tmp_locals_Inc$Protect_17_key_GetSerial = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_Inc$Protect$$$function_3_GetSerialCrypted(  );



            assert( tmp_locals_Inc$Protect_17_key_GetSerialCrypted == NULL );
            tmp_locals_Inc$Protect_17_key_GetSerialCrypted = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_Inc$Protect$$$function_4_LoadKeyStr(  );



            assert( tmp_locals_Inc$Protect_17_key_LoadKeyStr == NULL );
            tmp_locals_Inc$Protect_17_key_LoadKeyStr = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_Inc$Protect$$$function_5_LoadKeyFile(  );



            assert( tmp_locals_Inc$Protect_17_key_LoadKeyFile == NULL );
            tmp_locals_Inc$Protect_17_key_LoadKeyFile = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_Inc$Protect$$$function_6_Check(  );



            assert( tmp_locals_Inc$Protect_17_key_Check == NULL );
            tmp_locals_Inc$Protect_17_key_Check = tmp_assign_source_15;
        }
        // Tried code:
        {
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
            tmp_dict_value_1 = const_str_digest_3394dfb307e06a954b858974260bf51d;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_9 = _PyDict_NewPresized( 7 );
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key___init__ );
            tmp_dict_value_2 = tmp_locals_Inc$Protect_17_key___init__;
            tmp_dict_key_2 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key_GetSerial );
            tmp_dict_value_3 = tmp_locals_Inc$Protect_17_key_GetSerial;
            tmp_dict_key_3 = const_str_plain_GetSerial;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key_GetSerialCrypted );
            tmp_dict_value_4 = tmp_locals_Inc$Protect_17_key_GetSerialCrypted;
            tmp_dict_key_4 = const_str_plain_GetSerialCrypted;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key_LoadKeyStr );
            tmp_dict_value_5 = tmp_locals_Inc$Protect_17_key_LoadKeyStr;
            tmp_dict_key_5 = const_str_plain_LoadKeyStr;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key_LoadKeyFile );
            tmp_dict_value_6 = tmp_locals_Inc$Protect_17_key_LoadKeyFile;
            tmp_dict_key_6 = const_str_plain_LoadKeyFile;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Protect_17_key_Check );
            tmp_dict_value_7 = tmp_locals_Inc$Protect_17_key_Check;
            tmp_dict_key_7 = const_str_plain_Check;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Protect );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key___init__ );
        Py_DECREF( tmp_locals_Inc$Protect_17_key___init__ );
        tmp_locals_Inc$Protect_17_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key_GetSerial );
        Py_DECREF( tmp_locals_Inc$Protect_17_key_GetSerial );
        tmp_locals_Inc$Protect_17_key_GetSerial = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key_GetSerialCrypted );
        Py_DECREF( tmp_locals_Inc$Protect_17_key_GetSerialCrypted );
        tmp_locals_Inc$Protect_17_key_GetSerialCrypted = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key_LoadKeyStr );
        Py_DECREF( tmp_locals_Inc$Protect_17_key_LoadKeyStr );
        tmp_locals_Inc$Protect_17_key_LoadKeyStr = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key_LoadKeyFile );
        Py_DECREF( tmp_locals_Inc$Protect_17_key_LoadKeyFile );
        tmp_locals_Inc$Protect_17_key_LoadKeyFile = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Protect_17_key_Check );
        Py_DECREF( tmp_locals_Inc$Protect_17_key_Check );
        tmp_locals_Inc$Protect_17_key_Check = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Protect );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 17;

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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___metaclass__ );

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

                exception_lineno = 17;

                goto try_except_handler_4;
            }

            tmp_assign_source_16 = tmp_mvar_value_1;
            Py_INCREF( tmp_assign_source_16 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Protect );
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
        tmp_assign_source_16 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_16 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Protect );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_TProtect;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_323ab0af744989d8673aa81c6a2e1220->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_17;
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
    RESTORE_FRAME_EXCEPTION( frame_323ab0af744989d8673aa81c6a2e1220 );
#endif
    popFrameStack();

    assertFrameObject( frame_323ab0af744989d8673aa81c6a2e1220 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_323ab0af744989d8673aa81c6a2e1220 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_323ab0af744989d8673aa81c6a2e1220, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_323ab0af744989d8673aa81c6a2e1220->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_323ab0af744989d8673aa81c6a2e1220, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_18 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain_TProtect, tmp_assign_source_18 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Inc$Protect, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Inc$Protect );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
