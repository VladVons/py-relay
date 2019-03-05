/* Generated code for Python module 'Inc.Crypt'
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

/* The "_module_Inc$Crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Inc$Crypt;
PyDictObject *moduledict_Inc$Crypt;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple;
extern PyObject *const_str_digest_3094a3153522c449dea0453cbf4eb75a;
extern PyObject *const_str_plain_decrypt;
static PyObject *const_str_plain_Just;
extern PyObject *const_str_digest_512956f71065199b4656d61ab6cfc176;
extern PyObject *const_str_plain_new;
static PyObject *const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple;
extern PyObject *const_str_plain_MODE_ECB;
static PyObject *const_str_digest_29f3c7f03d304ab050edbdb17c8d62f5;
extern PyObject *const_str_plain_Cipher;
extern PyObject *const_str_plain_Encode;
static PyObject *const_tuple_int_pos_24_str_plain_x_tuple;
extern PyObject *const_str_plain_aValue;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_int_pos_16;
static PyObject *const_int_pos_17;
static PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_Ratio;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_E;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_SetKey;
static PyObject *const_tuple_str_plain_123456789012345678901234_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_b64decode;
extern PyObject *const_str_plain_Decode;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_Data;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_encrypt;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_aeff56e59883bf253e0bf36757f4fbe4;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple;
static PyObject *const_str_plain_123456789012345678901234;
static PyObject *const_str_digest_8b03abc68cb75fe9b20731e58d83f111;
extern PyObject *const_str_digest_27640573b8ce8850308523955531ea59;
extern PyObject *const_str_plain_AES;
extern PyObject *const_str_plain_x;
extern PyObject *const_int_pos_24;
static PyObject *const_str_plain_rjust;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_plain_AES_tuple;
extern PyObject *const_str_plain_TCrypt;
static PyObject *const_str_plain_b64encode;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple, 1, const_str_plain_aValue ); Py_INCREF( const_str_plain_aValue );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple, 2, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    const_str_plain_Just = UNSTREAM_STRING( &constant_bin[ 14762 ], 4, 1 );
    const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple, 1, const_str_plain_aValue ); Py_INCREF( const_str_plain_aValue );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple, 2, const_str_plain_Just ); Py_INCREF( const_str_plain_Just );
    const_str_digest_29f3c7f03d304ab050edbdb17c8d62f5 = UNSTREAM_STRING( &constant_bin[ 14766 ], 18, 0 );
    const_tuple_int_pos_24_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_24_str_plain_x_tuple, 0, const_int_pos_24 ); Py_INCREF( const_int_pos_24 );
    PyTuple_SET_ITEM( const_tuple_int_pos_24_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_int_pos_17 = PyInt_FromLong( 17l );
    const_str_plain_base64 = UNSTREAM_STRING( &constant_bin[ 14784 ], 6, 1 );
    const_str_plain_SetKey = UNSTREAM_STRING( &constant_bin[ 14671 ], 6, 1 );
    const_tuple_str_plain_123456789012345678901234_tuple = PyTuple_New( 1 );
    const_str_plain_123456789012345678901234 = UNSTREAM_STRING( &constant_bin[ 14790 ], 24, 0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_123456789012345678901234_tuple, 0, const_str_plain_123456789012345678901234 ); Py_INCREF( const_str_plain_123456789012345678901234 );
    const_str_plain_b64decode = UNSTREAM_STRING( &constant_bin[ 14814 ], 9, 1 );
    const_str_digest_aeff56e59883bf253e0bf36757f4fbe4 = UNSTREAM_STRING( &constant_bin[ 14823 ], 48, 0 );
    const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 1, const_str_plain_aValue ); Py_INCREF( const_str_plain_aValue );
    PyTuple_SET_ITEM( const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 2, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    PyTuple_SET_ITEM( const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 3, const_str_plain_Ratio ); Py_INCREF( const_str_plain_Ratio );
    PyTuple_SET_ITEM( const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 4, const_str_plain_Just ); Py_INCREF( const_str_plain_Just );
    const_str_digest_8b03abc68cb75fe9b20731e58d83f111 = UNSTREAM_STRING( &constant_bin[ 14871 ], 53, 0 );
    const_str_plain_rjust = UNSTREAM_STRING( &constant_bin[ 14924 ], 5, 1 );
    const_tuple_str_plain_AES_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AES_tuple, 0, const_str_plain_AES ); Py_INCREF( const_str_plain_AES );
    const_str_plain_b64encode = UNSTREAM_STRING( &constant_bin[ 14929 ], 9, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Inc$Crypt( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c8b0c109fdb64febb2c3f4609675d16a;
static PyCodeObject *codeobj_716cf10034f3b76289c5c13da2bd27c9;
static PyCodeObject *codeobj_c5d295abd65b3174c73a8ce71967b03d;
static PyCodeObject *codeobj_7ad8e1394b467cebc7784db785c2bc2b;
static PyCodeObject *codeobj_6cdd666507d89cebba2d8b16ac4ba248;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8b03abc68cb75fe9b20731e58d83f111;
    codeobj_c8b0c109fdb64febb2c3f4609675d16a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_29f3c7f03d304ab050edbdb17c8d62f5, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_716cf10034f3b76289c5c13da2bd27c9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Decode, 31, const_tuple_str_plain_self_str_plain_aValue_str_plain_Data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5d295abd65b3174c73a8ce71967b03d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Encode, 25, const_tuple_64a0b16cf3f33c529927983cfe9e57e3_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ad8e1394b467cebc7784db785c2bc2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetKey, 21, const_tuple_str_plain_self_str_plain_aValue_str_plain_Just_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6cdd666507d89cebba2d8b16ac4ba248 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 18, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_2_SetKey(  );


static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_3_Encode(  );


static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_4_Decode(  );


// The module function definitions.
static PyObject *impl_Inc$Crypt$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6cdd666507d89cebba2d8b16ac4ba248;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6cdd666507d89cebba2d8b16ac4ba248 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6cdd666507d89cebba2d8b16ac4ba248, codeobj_6cdd666507d89cebba2d8b16ac4ba248, module_Inc$Crypt, sizeof(void *) );
    frame_6cdd666507d89cebba2d8b16ac4ba248 = cache_frame_6cdd666507d89cebba2d8b16ac4ba248;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6cdd666507d89cebba2d8b16ac4ba248 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6cdd666507d89cebba2d8b16ac4ba248 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_6cdd666507d89cebba2d8b16ac4ba248->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_SetKey, &PyTuple_GET_ITEM( const_tuple_str_plain_123456789012345678901234_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cdd666507d89cebba2d8b16ac4ba248 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cdd666507d89cebba2d8b16ac4ba248 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6cdd666507d89cebba2d8b16ac4ba248, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6cdd666507d89cebba2d8b16ac4ba248->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6cdd666507d89cebba2d8b16ac4ba248, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6cdd666507d89cebba2d8b16ac4ba248,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6cdd666507d89cebba2d8b16ac4ba248 == cache_frame_6cdd666507d89cebba2d8b16ac4ba248 )
    {
        Py_DECREF( frame_6cdd666507d89cebba2d8b16ac4ba248 );
    }
    cache_frame_6cdd666507d89cebba2d8b16ac4ba248 = NULL;

    assertFrameObject( frame_6cdd666507d89cebba2d8b16ac4ba248 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_1___init__ );
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


static PyObject *impl_Inc$Crypt$$$function_2_SetKey( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aValue = python_pars[ 1 ];
    PyObject *var_Just = NULL;
    struct Nuitka_FrameObject *frame_7ad8e1394b467cebc7784db785c2bc2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7ad8e1394b467cebc7784db785c2bc2b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ad8e1394b467cebc7784db785c2bc2b, codeobj_7ad8e1394b467cebc7784db785c2bc2b, module_Inc$Crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ad8e1394b467cebc7784db785c2bc2b = cache_frame_7ad8e1394b467cebc7784db785c2bc2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ad8e1394b467cebc7784db785c2bc2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ad8e1394b467cebc7784db785c2bc2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_aValue );
        tmp_called_instance_1 = par_aValue;
        frame_7ad8e1394b467cebc7784db785c2bc2b->m_frame.f_lineno = 22;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_rjust, &PyTuple_GET_ITEM( const_tuple_int_pos_24_str_plain_x_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_Just == NULL );
        var_Just = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_AES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AES" );
            exception_tb = NULL;

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Just );
        tmp_args_element_name_1 = var_Just;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_AES );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AES );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AES" );
            exception_tb = NULL;

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MODE_ECB );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7ad8e1394b467cebc7784db785c2bc2b->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_Cipher, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad8e1394b467cebc7784db785c2bc2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad8e1394b467cebc7784db785c2bc2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ad8e1394b467cebc7784db785c2bc2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ad8e1394b467cebc7784db785c2bc2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ad8e1394b467cebc7784db785c2bc2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ad8e1394b467cebc7784db785c2bc2b,
        type_description_1,
        par_self,
        par_aValue,
        var_Just
    );


    // Release cached frame.
    if ( frame_7ad8e1394b467cebc7784db785c2bc2b == cache_frame_7ad8e1394b467cebc7784db785c2bc2b )
    {
        Py_DECREF( frame_7ad8e1394b467cebc7784db785c2bc2b );
    }
    cache_frame_7ad8e1394b467cebc7784db785c2bc2b = NULL;

    assertFrameObject( frame_7ad8e1394b467cebc7784db785c2bc2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_2_SetKey );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_Just );
    Py_DECREF( var_Just );
    var_Just = NULL;

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

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

    Py_XDECREF( var_Just );
    var_Just = NULL;

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_2_SetKey );
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


static PyObject *impl_Inc$Crypt$$$function_3_Encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aValue = python_pars[ 1 ];
    PyObject *var_Data = NULL;
    PyObject *var_Ratio = NULL;
    PyObject *var_Just = NULL;
    struct Nuitka_FrameObject *frame_c5d295abd65b3174c73a8ce71967b03d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5d295abd65b3174c73a8ce71967b03d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5d295abd65b3174c73a8ce71967b03d, codeobj_c5d295abd65b3174c73a8ce71967b03d, module_Inc$Crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5d295abd65b3174c73a8ce71967b03d = cache_frame_c5d295abd65b3174c73a8ce71967b03d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5d295abd65b3174c73a8ce71967b03d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5d295abd65b3174c73a8ce71967b03d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_aValue );
        tmp_len_arg_1 = par_aValue;
        tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_17;
        tmp_int_arg_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Ratio == NULL );
        var_Ratio = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_aValue );
        tmp_source_name_1 = par_aValue;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rjust );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Ratio );
        tmp_left_name_3 = var_Ratio;
        tmp_right_name_3 = const_int_pos_16;
        tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c5d295abd65b3174c73a8ce71967b03d->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Just == NULL );
        var_Just = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Cipher );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Just );
        tmp_args_element_name_2 = var_Just;
        frame_c5d295abd65b3174c73a8ce71967b03d->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encrypt, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Data == NULL );
        var_Data = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "base64" );
            exception_tb = NULL;

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_Data );
        tmp_args_element_name_3 = var_Data;
        frame_c5d295abd65b3174c73a8ce71967b03d->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_b64encode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d295abd65b3174c73a8ce71967b03d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d295abd65b3174c73a8ce71967b03d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d295abd65b3174c73a8ce71967b03d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5d295abd65b3174c73a8ce71967b03d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5d295abd65b3174c73a8ce71967b03d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5d295abd65b3174c73a8ce71967b03d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5d295abd65b3174c73a8ce71967b03d,
        type_description_1,
        par_self,
        par_aValue,
        var_Data,
        var_Ratio,
        var_Just
    );


    // Release cached frame.
    if ( frame_c5d295abd65b3174c73a8ce71967b03d == cache_frame_c5d295abd65b3174c73a8ce71967b03d )
    {
        Py_DECREF( frame_c5d295abd65b3174c73a8ce71967b03d );
    }
    cache_frame_c5d295abd65b3174c73a8ce71967b03d = NULL;

    assertFrameObject( frame_c5d295abd65b3174c73a8ce71967b03d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_3_Encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Data );
    Py_DECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_Ratio );
    Py_DECREF( var_Ratio );
    var_Ratio = NULL;

    CHECK_OBJECT( (PyObject *)var_Just );
    Py_DECREF( var_Just );
    var_Just = NULL;

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

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

    Py_XDECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Ratio );
    var_Ratio = NULL;

    Py_XDECREF( var_Just );
    var_Just = NULL;

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_3_Encode );
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


static PyObject *impl_Inc$Crypt$$$function_4_Decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aValue = python_pars[ 1 ];
    PyObject *var_Data = NULL;
    struct Nuitka_FrameObject *frame_716cf10034f3b76289c5c13da2bd27c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_716cf10034f3b76289c5c13da2bd27c9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_716cf10034f3b76289c5c13da2bd27c9, codeobj_716cf10034f3b76289c5c13da2bd27c9, module_Inc$Crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_716cf10034f3b76289c5c13da2bd27c9 = cache_frame_716cf10034f3b76289c5c13da2bd27c9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_716cf10034f3b76289c5c13da2bd27c9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_716cf10034f3b76289c5c13da2bd27c9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "base64" );
            exception_tb = NULL;

            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_aValue );
        tmp_args_element_name_1 = par_aValue;
        frame_716cf10034f3b76289c5c13da2bd27c9->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_b64decode, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_Data == NULL );
        var_Data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Cipher );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_Data );
        tmp_args_element_name_2 = var_Data;
        frame_716cf10034f3b76289c5c13da2bd27c9->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_decrypt, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_716cf10034f3b76289c5c13da2bd27c9->m_frame.f_lineno = 33;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_716cf10034f3b76289c5c13da2bd27c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_716cf10034f3b76289c5c13da2bd27c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_716cf10034f3b76289c5c13da2bd27c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_716cf10034f3b76289c5c13da2bd27c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_716cf10034f3b76289c5c13da2bd27c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_716cf10034f3b76289c5c13da2bd27c9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_716cf10034f3b76289c5c13da2bd27c9,
        type_description_1,
        par_self,
        par_aValue,
        var_Data
    );


    // Release cached frame.
    if ( frame_716cf10034f3b76289c5c13da2bd27c9 == cache_frame_716cf10034f3b76289c5c13da2bd27c9 )
    {
        Py_DECREF( frame_716cf10034f3b76289c5c13da2bd27c9 );
    }
    cache_frame_716cf10034f3b76289c5c13da2bd27c9 = NULL;

    assertFrameObject( frame_716cf10034f3b76289c5c13da2bd27c9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_4_Decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_Data );
    Py_DECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

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

    CHECK_OBJECT( (PyObject *)par_aValue );
    Py_DECREF( par_aValue );
    par_aValue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Crypt$$$function_4_Decode );
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



static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Crypt$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6cdd666507d89cebba2d8b16ac4ba248,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_2_SetKey(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Crypt$$$function_2_SetKey,
        const_str_plain_SetKey,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ad8e1394b467cebc7784db785c2bc2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_3_Encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Crypt$$$function_3_Encode,
        const_str_plain_Encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c5d295abd65b3174c73a8ce71967b03d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Crypt$$$function_4_Decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Crypt$$$function_4_Decode,
        const_str_plain_Decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_716cf10034f3b76289c5c13da2bd27c9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Inc$Crypt =
{
    PyModuleDef_HEAD_INIT,
    "Inc.Crypt",
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

MOD_INIT_DECL( Inc$Crypt )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Inc$Crypt );
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
    puts("Inc.Crypt: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Crypt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Crypt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initInc$Crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Inc$Crypt = Py_InitModule4(
        "Inc.Crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Inc$Crypt = PyModule_Create( &mdef_Inc$Crypt );
#endif

    moduledict_Inc$Crypt = MODULE_DICT( module_Inc$Crypt );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Inc$Crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Inc$Crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Inc$Crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_512956f71065199b4656d61ab6cfc176, module_Inc$Crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_Inc$Crypt_17_key_Decode = NULL;
    PyObject *tmp_locals_Inc$Crypt_17_key_Encode = NULL;
    PyObject *tmp_locals_Inc$Crypt_17_key_SetKey = NULL;
    PyObject *tmp_locals_Inc$Crypt_17_key___init__ = NULL;
    struct Nuitka_FrameObject *frame_c8b0c109fdb64febb2c3f4609675d16a;
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
    PyObject *tmp_print_value;
    bool tmp_result;
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
        UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8b03abc68cb75fe9b20731e58d83f111;
        UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c8b0c109fdb64febb2c3f4609675d16a = MAKE_MODULE_FRAME( codeobj_c8b0c109fdb64febb2c3f4609675d16a, module_Inc$Crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c8b0c109fdb64febb2c3f4609675d16a );
    assert( Py_REFCNT( frame_c8b0c109fdb64febb2c3f4609675d16a ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_3094a3153522c449dea0453cbf4eb75a;
        tmp_globals_name_1 = (PyObject *)moduledict_Inc$Crypt;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_AES_tuple;
        frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AES );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_AES, tmp_assign_source_3 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_c8b0c109fdb64febb2c3f4609675d16a );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c8b0c109fdb64febb2c3f4609675d16a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c8b0c109fdb64febb2c3f4609675d16a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
            UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_E, tmp_assign_source_4 );
        }
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___file__ );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__file__" );
                exception_tb = NULL;

                exception_lineno = 12;

                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_1;
            tmp_print_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_print_value, 0, tmp_tuple_element_1 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_E );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_E );
            }

            CHECK_OBJECT( tmp_mvar_value_2 );
            tmp_tuple_element_1 = tmp_mvar_value_2;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_print_value, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_str_digest_aeff56e59883bf253e0bf36757f4fbe4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_print_value, 2, tmp_tuple_element_1 );
            tmp_result = PRINT_ITEM( tmp_print_value );
            Py_DECREF( tmp_print_value );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto frame_exception_exit_1;
            }
        }
        if ( PRINT_NEW_LINE() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 9;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame) frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Crypt );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_base64;
        tmp_globals_name_2 = (PyObject *)moduledict_Inc$Crypt;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_Inc$Crypt$$$function_1___init__(  );



            assert( tmp_locals_Inc$Crypt_17_key___init__ == NULL );
            tmp_locals_Inc$Crypt_17_key___init__ = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_Inc$Crypt$$$function_2_SetKey(  );



            assert( tmp_locals_Inc$Crypt_17_key_SetKey == NULL );
            tmp_locals_Inc$Crypt_17_key_SetKey = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_Inc$Crypt$$$function_3_Encode(  );



            assert( tmp_locals_Inc$Crypt_17_key_Encode == NULL );
            tmp_locals_Inc$Crypt_17_key_Encode = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_Inc$Crypt$$$function_4_Decode(  );



            assert( tmp_locals_Inc$Crypt_17_key_Decode == NULL );
            tmp_locals_Inc$Crypt_17_key_Decode = tmp_assign_source_10;
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
            tmp_dict_value_1 = const_str_digest_512956f71065199b4656d61ab6cfc176;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_6 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Crypt_17_key___init__ );
            tmp_dict_value_2 = tmp_locals_Inc$Crypt_17_key___init__;
            tmp_dict_key_2 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Crypt_17_key_SetKey );
            tmp_dict_value_3 = tmp_locals_Inc$Crypt_17_key_SetKey;
            tmp_dict_key_3 = const_str_plain_SetKey;
            tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Crypt_17_key_Encode );
            tmp_dict_value_4 = tmp_locals_Inc$Crypt_17_key_Encode;
            tmp_dict_key_4 = const_str_plain_Encode;
            tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Crypt_17_key_Decode );
            tmp_dict_value_5 = tmp_locals_Inc$Crypt_17_key_Decode;
            tmp_dict_key_5 = const_str_plain_Decode;
            tmp_res = PyDict_SetItem( tmp_assign_source_6, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Crypt_17_key___init__ );
        Py_DECREF( tmp_locals_Inc$Crypt_17_key___init__ );
        tmp_locals_Inc$Crypt_17_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Crypt_17_key_SetKey );
        Py_DECREF( tmp_locals_Inc$Crypt_17_key_SetKey );
        tmp_locals_Inc$Crypt_17_key_SetKey = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Crypt_17_key_Encode );
        Py_DECREF( tmp_locals_Inc$Crypt_17_key_Encode );
        tmp_locals_Inc$Crypt_17_key_Encode = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Crypt_17_key_Decode );
        Py_DECREF( tmp_locals_Inc$Crypt_17_key_Decode );
        tmp_locals_Inc$Crypt_17_key_Decode = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        nuitka_bool tmp_condition_result_2;
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
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_11 == NULL )
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
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___metaclass__ );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                exception_tb = NULL;

                exception_lineno = 17;

                goto try_except_handler_4;
            }

            tmp_assign_source_11 = tmp_mvar_value_3;
            Py_INCREF( tmp_assign_source_11 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Crypt );
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
        tmp_assign_source_11 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_11 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_TCrypt;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_12;
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c8b0c109fdb64febb2c3f4609675d16a );
#endif
    popFrameStack();

    assertFrameObject( frame_c8b0c109fdb64febb2c3f4609675d16a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c8b0c109fdb64febb2c3f4609675d16a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8b0c109fdb64febb2c3f4609675d16a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8b0c109fdb64febb2c3f4609675d16a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8b0c109fdb64febb2c3f4609675d16a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_13 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain_TCrypt, tmp_assign_source_13 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Inc$Crypt, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Inc$Crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
