/* Generated code for Python module 'Crypto.Util.py3compat'
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

/* The "_module_Crypto$Util$py3compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Util$py3compat;
PyDictObject *moduledict_Crypto$Util$py3compat;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_94491e0a0f40df7fc91349180a654513;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_plain_tobytes;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_bchr;
static PyObject *const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_bstr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_62b7e67e29e99420603c12d205222fa5;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_0cf228145d32692980f9a33ff2c82adc;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_digest_8416d1837827dc0ec869b43a801a62f2;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_6583740a6a1c47b6ae52d370ad281ef1;
extern PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_str_plain_bord;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_94491e0a0f40df7fc91349180a654513 = UNSTREAM_STRING( &constant_bin[ 12045 ], 40, 0 );
    const_str_plain_tobytes = UNSTREAM_STRING( &constant_bin[ 12085 ], 7, 1 );
    const_str_plain_bchr = UNSTREAM_STRING( &constant_bin[ 12092 ], 4, 1 );
    const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple = PyTuple_New( 1 );
    const_str_digest_62b7e67e29e99420603c12d205222fa5 = UNSTREAM_STRING( &constant_bin[ 12096 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0, const_str_digest_62b7e67e29e99420603c12d205222fa5 ); Py_INCREF( const_str_digest_62b7e67e29e99420603c12d205222fa5 );
    const_str_plain_bstr = UNSTREAM_STRING( &constant_bin[ 11069 ], 4, 1 );
    const_str_digest_0cf228145d32692980f9a33ff2c82adc = UNSTREAM_STRING( &constant_bin[ 12103 ], 57, 0 );
    const_str_digest_8416d1837827dc0ec869b43a801a62f2 = UNSTREAM_STRING( &constant_bin[ 12160 ], 1689, 0 );
    const_str_digest_6583740a6a1c47b6ae52d370ad281ef1 = UNSTREAM_STRING( &constant_bin[ 13849 ], 30, 0 );
    const_str_plain_bord = UNSTREAM_STRING( &constant_bin[ 13641 ], 4, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Util$py3compat( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ac61e0b9a2cd5f831e673138d32a9e2a;
static PyCodeObject *codeobj_4aa5f7731c2dac1027fcfd302de7581d;
static PyCodeObject *codeobj_7a2038004780750340c79dee92d63e41;
static PyCodeObject *codeobj_ee7854f3328439da98def1aced8d3da3;
static PyCodeObject *codeobj_c71d0acff0b51a8c05c588269d719c8e;
static PyCodeObject *codeobj_e8c8686552d4f053db2b142e90ac489f;
static PyCodeObject *codeobj_d172d74e736edf201bd99343b9c618b2;
static PyCodeObject *codeobj_60cf3a171a7e1ae6f80fcaa91b7c438f;
static PyCodeObject *codeobj_894d4771369cccae825502b38f466ae8;
static PyCodeObject *codeobj_f88b788caff845de1cdb1228668bf1ff;
static PyCodeObject *codeobj_295d1c4ffcdf052eb105fd2f0ea30988;
static PyCodeObject *codeobj_54eeb9cafc7b4d9d939a4ff20478f35c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0cf228145d32692980f9a33ff2c82adc;
    codeobj_ac61e0b9a2cd5f831e673138d32a9e2a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6583740a6a1c47b6ae52d370ad281ef1, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_4aa5f7731c2dac1027fcfd302de7581d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 66, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7a2038004780750340c79dee92d63e41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 87, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ee7854f3328439da98def1aced8d3da3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bchr, 68, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c71d0acff0b51a8c05c588269d719c8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bchr, 89, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8c8686552d4f053db2b142e90ac489f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bord, 72, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d172d74e736edf201bd99343b9c618b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bord, 96, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_60cf3a171a7e1ae6f80fcaa91b7c438f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bstr, 70, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_894d4771369cccae825502b38f466ae8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bstr, 91, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f88b788caff845de1cdb1228668bf1ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 75, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_295d1c4ffcdf052eb105fd2f0ea30988 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 81, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54eeb9cafc7b4d9d939a4ff20478f35c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 98, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  );


// The module function definitions.
static PyObject *impl_Crypto$Util$py3compat$$$function_1_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_s );
    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_1_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_1_b );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_2_bchr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ee7854f3328439da98def1aced8d3da3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee7854f3328439da98def1aced8d3da3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee7854f3328439da98def1aced8d3da3, codeobj_ee7854f3328439da98def1aced8d3da3, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_ee7854f3328439da98def1aced8d3da3 = cache_frame_ee7854f3328439da98def1aced8d3da3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee7854f3328439da98def1aced8d3da3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee7854f3328439da98def1aced8d3da3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT( par_s );
        tmp_chr_arg_1 = par_s;
        tmp_return_value = BUILTIN_CHR( tmp_chr_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee7854f3328439da98def1aced8d3da3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee7854f3328439da98def1aced8d3da3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee7854f3328439da98def1aced8d3da3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee7854f3328439da98def1aced8d3da3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee7854f3328439da98def1aced8d3da3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee7854f3328439da98def1aced8d3da3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee7854f3328439da98def1aced8d3da3,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_ee7854f3328439da98def1aced8d3da3 == cache_frame_ee7854f3328439da98def1aced8d3da3 )
    {
        Py_DECREF( frame_ee7854f3328439da98def1aced8d3da3 );
    }
    cache_frame_ee7854f3328439da98def1aced8d3da3 = NULL;

    assertFrameObject( frame_ee7854f3328439da98def1aced8d3da3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_2_bchr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_2_bchr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_3_bstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_60cf3a171a7e1ae6f80fcaa91b7c438f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60cf3a171a7e1ae6f80fcaa91b7c438f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60cf3a171a7e1ae6f80fcaa91b7c438f, codeobj_60cf3a171a7e1ae6f80fcaa91b7c438f, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_60cf3a171a7e1ae6f80fcaa91b7c438f = cache_frame_60cf3a171a7e1ae6f80fcaa91b7c438f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60cf3a171a7e1ae6f80fcaa91b7c438f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_1;
        CHECK_OBJECT( par_s );
        tmp_str_arg_1 = par_s;
        tmp_return_value = PyObject_Str( tmp_str_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60cf3a171a7e1ae6f80fcaa91b7c438f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60cf3a171a7e1ae6f80fcaa91b7c438f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60cf3a171a7e1ae6f80fcaa91b7c438f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60cf3a171a7e1ae6f80fcaa91b7c438f,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_60cf3a171a7e1ae6f80fcaa91b7c438f == cache_frame_60cf3a171a7e1ae6f80fcaa91b7c438f )
    {
        Py_DECREF( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );
    }
    cache_frame_60cf3a171a7e1ae6f80fcaa91b7c438f = NULL;

    assertFrameObject( frame_60cf3a171a7e1ae6f80fcaa91b7c438f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_3_bstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_3_bstr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_4_bord( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e8c8686552d4f053db2b142e90ac489f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8c8686552d4f053db2b142e90ac489f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8c8686552d4f053db2b142e90ac489f, codeobj_e8c8686552d4f053db2b142e90ac489f, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_e8c8686552d4f053db2b142e90ac489f = cache_frame_e8c8686552d4f053db2b142e90ac489f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8c8686552d4f053db2b142e90ac489f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8c8686552d4f053db2b142e90ac489f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT( par_s );
        tmp_ord_arg_1 = par_s;
        tmp_return_value = BUILTIN_ORD( tmp_ord_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8c8686552d4f053db2b142e90ac489f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8c8686552d4f053db2b142e90ac489f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8c8686552d4f053db2b142e90ac489f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8c8686552d4f053db2b142e90ac489f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8c8686552d4f053db2b142e90ac489f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8c8686552d4f053db2b142e90ac489f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8c8686552d4f053db2b142e90ac489f,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_e8c8686552d4f053db2b142e90ac489f == cache_frame_e8c8686552d4f053db2b142e90ac489f )
    {
        Py_DECREF( frame_e8c8686552d4f053db2b142e90ac489f );
    }
    cache_frame_e8c8686552d4f053db2b142e90ac489f = NULL;

    assertFrameObject( frame_e8c8686552d4f053db2b142e90ac489f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_4_bord );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_4_bord );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_5_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f88b788caff845de1cdb1228668bf1ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f88b788caff845de1cdb1228668bf1ff = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f88b788caff845de1cdb1228668bf1ff, codeobj_f88b788caff845de1cdb1228668bf1ff, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_f88b788caff845de1cdb1228668bf1ff = cache_frame_f88b788caff845de1cdb1228668bf1ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f88b788caff845de1cdb1228668bf1ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f88b788caff845de1cdb1228668bf1ff ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_s );
        tmp_called_instance_1 = par_s;
        frame_f88b788caff845de1cdb1228668bf1ff->m_frame.f_lineno = 77;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_f88b788caff845de1cdb1228668bf1ff );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f88b788caff845de1cdb1228668bf1ff, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f88b788caff845de1cdb1228668bf1ff, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_2 = const_str_empty;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_f88b788caff845de1cdb1228668bf1ff->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f88b788caff845de1cdb1228668bf1ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f88b788caff845de1cdb1228668bf1ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f88b788caff845de1cdb1228668bf1ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f88b788caff845de1cdb1228668bf1ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f88b788caff845de1cdb1228668bf1ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f88b788caff845de1cdb1228668bf1ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f88b788caff845de1cdb1228668bf1ff,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_f88b788caff845de1cdb1228668bf1ff == cache_frame_f88b788caff845de1cdb1228668bf1ff )
    {
        Py_DECREF( frame_f88b788caff845de1cdb1228668bf1ff );
    }
    cache_frame_f88b788caff845de1cdb1228668bf1ff = NULL;

    assertFrameObject( frame_f88b788caff845de1cdb1228668bf1ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_6_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_295d1c4ffcdf052eb105fd2f0ea30988;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_295d1c4ffcdf052eb105fd2f0ea30988 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_295d1c4ffcdf052eb105fd2f0ea30988, codeobj_295d1c4ffcdf052eb105fd2f0ea30988, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_295d1c4ffcdf052eb105fd2f0ea30988 = cache_frame_295d1c4ffcdf052eb105fd2f0ea30988;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_295d1c4ffcdf052eb105fd2f0ea30988 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_295d1c4ffcdf052eb105fd2f0ea30988 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "o";
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_s );
            tmp_called_instance_1 = par_s;
            frame_295d1c4ffcdf052eb105fd2f0ea30988->m_frame.f_lineno = 83;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_2 = const_str_empty;
            CHECK_OBJECT( par_s );
            tmp_args_element_name_1 = par_s;
            frame_295d1c4ffcdf052eb105fd2f0ea30988->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_295d1c4ffcdf052eb105fd2f0ea30988 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_295d1c4ffcdf052eb105fd2f0ea30988 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_295d1c4ffcdf052eb105fd2f0ea30988 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_295d1c4ffcdf052eb105fd2f0ea30988, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_295d1c4ffcdf052eb105fd2f0ea30988->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_295d1c4ffcdf052eb105fd2f0ea30988, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_295d1c4ffcdf052eb105fd2f0ea30988,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_295d1c4ffcdf052eb105fd2f0ea30988 == cache_frame_295d1c4ffcdf052eb105fd2f0ea30988 )
    {
        Py_DECREF( frame_295d1c4ffcdf052eb105fd2f0ea30988 );
    }
    cache_frame_295d1c4ffcdf052eb105fd2f0ea30988 = NULL;

    assertFrameObject( frame_295d1c4ffcdf052eb105fd2f0ea30988 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_6_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_6_tobytes );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_7_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7a2038004780750340c79dee92d63e41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a2038004780750340c79dee92d63e41 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a2038004780750340c79dee92d63e41, codeobj_7a2038004780750340c79dee92d63e41, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_7a2038004780750340c79dee92d63e41 = cache_frame_7a2038004780750340c79dee92d63e41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a2038004780750340c79dee92d63e41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a2038004780750340c79dee92d63e41 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_s );
        tmp_called_instance_1 = par_s;
        frame_7a2038004780750340c79dee92d63e41->m_frame.f_lineno = 88;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a2038004780750340c79dee92d63e41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a2038004780750340c79dee92d63e41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a2038004780750340c79dee92d63e41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a2038004780750340c79dee92d63e41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a2038004780750340c79dee92d63e41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a2038004780750340c79dee92d63e41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a2038004780750340c79dee92d63e41,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_7a2038004780750340c79dee92d63e41 == cache_frame_7a2038004780750340c79dee92d63e41 )
    {
        Py_DECREF( frame_7a2038004780750340c79dee92d63e41 );
    }
    cache_frame_7a2038004780750340c79dee92d63e41 = NULL;

    assertFrameObject( frame_7a2038004780750340c79dee92d63e41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_7_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_7_b );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_8_bchr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c71d0acff0b51a8c05c588269d719c8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c71d0acff0b51a8c05c588269d719c8e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c71d0acff0b51a8c05c588269d719c8e, codeobj_c71d0acff0b51a8c05c588269d719c8e, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_c71d0acff0b51a8c05c588269d719c8e = cache_frame_c71d0acff0b51a8c05c588269d719c8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c71d0acff0b51a8c05c588269d719c8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c71d0acff0b51a8c05c588269d719c8e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_s );
        tmp_list_element_1 = par_s;
        tmp_str_arg_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_str_arg_1, 0, tmp_list_element_1 );
        tmp_return_value = PyObject_Str( tmp_str_arg_1 );
        Py_DECREF( tmp_str_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c71d0acff0b51a8c05c588269d719c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c71d0acff0b51a8c05c588269d719c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c71d0acff0b51a8c05c588269d719c8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c71d0acff0b51a8c05c588269d719c8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c71d0acff0b51a8c05c588269d719c8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c71d0acff0b51a8c05c588269d719c8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c71d0acff0b51a8c05c588269d719c8e,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_c71d0acff0b51a8c05c588269d719c8e == cache_frame_c71d0acff0b51a8c05c588269d719c8e )
    {
        Py_DECREF( frame_c71d0acff0b51a8c05c588269d719c8e );
    }
    cache_frame_c71d0acff0b51a8c05c588269d719c8e = NULL;

    assertFrameObject( frame_c71d0acff0b51a8c05c588269d719c8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_8_bchr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_8_bchr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_9_bstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_894d4771369cccae825502b38f466ae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_894d4771369cccae825502b38f466ae8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_894d4771369cccae825502b38f466ae8, codeobj_894d4771369cccae825502b38f466ae8, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_894d4771369cccae825502b38f466ae8 = cache_frame_894d4771369cccae825502b38f466ae8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_894d4771369cccae825502b38f466ae8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_894d4771369cccae825502b38f466ae8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "o";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_raise_value_1;
            tmp_raise_type_1 = PyExc_TypeError;
            tmp_raise_value_1 = const_str_digest_94491e0a0f40df7fc91349180a654513;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_value = tmp_raise_value_1;
            Py_INCREF( tmp_raise_value_1 );
            exception_lineno = 93;
            RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_str_arg_1;
            CHECK_OBJECT( par_s );
            tmp_str_arg_1 = par_s;
            tmp_return_value = PyObject_Str( tmp_str_arg_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_894d4771369cccae825502b38f466ae8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_894d4771369cccae825502b38f466ae8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_894d4771369cccae825502b38f466ae8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_894d4771369cccae825502b38f466ae8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_894d4771369cccae825502b38f466ae8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_894d4771369cccae825502b38f466ae8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_894d4771369cccae825502b38f466ae8,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_894d4771369cccae825502b38f466ae8 == cache_frame_894d4771369cccae825502b38f466ae8 )
    {
        Py_DECREF( frame_894d4771369cccae825502b38f466ae8 );
    }
    cache_frame_894d4771369cccae825502b38f466ae8 = NULL;

    assertFrameObject( frame_894d4771369cccae825502b38f466ae8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_9_bstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_9_bstr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_10_bord( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_s );
    tmp_return_value = par_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_10_bord );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_10_bord );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Crypto$Util$py3compat$$$function_11_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_54eeb9cafc7b4d9d939a4ff20478f35c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54eeb9cafc7b4d9d939a4ff20478f35c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54eeb9cafc7b4d9d939a4ff20478f35c, codeobj_54eeb9cafc7b4d9d939a4ff20478f35c, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_54eeb9cafc7b4d9d939a4ff20478f35c = cache_frame_54eeb9cafc7b4d9d939a4ff20478f35c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54eeb9cafc7b4d9d939a4ff20478f35c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54eeb9cafc7b4d9d939a4ff20478f35c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "o";
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
        CHECK_OBJECT( par_s );
        tmp_return_value = par_s;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_s );
            tmp_isinstance_inst_2 = par_s;
            tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_s );
                tmp_called_instance_1 = par_s;
                frame_54eeb9cafc7b4d9d939a4ff20478f35c->m_frame.f_lineno = 103;
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 103;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_str_arg_1;
                CHECK_OBJECT( par_s );
                tmp_str_arg_1 = par_s;
                tmp_return_value = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 105;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54eeb9cafc7b4d9d939a4ff20478f35c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54eeb9cafc7b4d9d939a4ff20478f35c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54eeb9cafc7b4d9d939a4ff20478f35c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54eeb9cafc7b4d9d939a4ff20478f35c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54eeb9cafc7b4d9d939a4ff20478f35c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54eeb9cafc7b4d9d939a4ff20478f35c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54eeb9cafc7b4d9d939a4ff20478f35c,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_54eeb9cafc7b4d9d939a4ff20478f35c == cache_frame_54eeb9cafc7b4d9d939a4ff20478f35c )
    {
        Py_DECREF( frame_54eeb9cafc7b4d9d939a4ff20478f35c );
    }
    cache_frame_54eeb9cafc7b4d9d939a4ff20478f35c = NULL;

    assertFrameObject( frame_54eeb9cafc7b4d9d939a4ff20478f35c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_11_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_11_tobytes );
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



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_10_bord,
        const_str_plain_bord,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d172d74e736edf201bd99343b9c618b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_11_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_54eeb9cafc7b4d9d939a4ff20478f35c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_1_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4aa5f7731c2dac1027fcfd302de7581d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_2_bchr,
        const_str_plain_bchr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee7854f3328439da98def1aced8d3da3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_3_bstr,
        const_str_plain_bstr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_60cf3a171a7e1ae6f80fcaa91b7c438f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_4_bord,
        const_str_plain_bord,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8c8686552d4f053db2b142e90ac489f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_5_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f88b788caff845de1cdb1228668bf1ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_6_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_295d1c4ffcdf052eb105fd2f0ea30988,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_7_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7a2038004780750340c79dee92d63e41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_8_bchr,
        const_str_plain_bchr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c71d0acff0b51a8c05c588269d719c8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_9_bstr,
        const_str_plain_bstr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_894d4771369cccae825502b38f466ae8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Util$py3compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Util$py3compat =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Util.py3compat",
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

MOD_INIT_DECL( Crypto$Util$py3compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Util$py3compat );
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
    puts("Crypto.Util.py3compat: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util.py3compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util.py3compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Util$py3compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Util$py3compat = Py_InitModule4(
        "Crypto.Util.py3compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Crypto$Util$py3compat = PyModule_Create( &mdef_Crypto$Util$py3compat );
#endif

    moduledict_Crypto$Util$py3compat = MODULE_DICT( module_Crypto$Util$py3compat );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Crypto$Util$py3compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Crypto$Util$py3compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Util$py3compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Util$py3compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Crypto$Util$py3compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_391b5dc084c9caede4445b681a10e649, module_Crypto$Util$py3compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ac61e0b9a2cd5f831e673138d32a9e2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_8416d1837827dc0ec869b43a801a62f2;
        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_0cf228145d32692980f9a33ff2c82adc;
        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Util$py3compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_ac61e0b9a2cd5f831e673138d32a9e2a = MAKE_MODULE_FRAME( codeobj_ac61e0b9a2cd5f831e673138d32a9e2a, module_Crypto$Util$py3compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ac61e0b9a2cd5f831e673138d32a9e2a );
    assert( Py_REFCNT( frame_ac61e0b9a2cd5f831e673138d32a9e2a ) == 2 );

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_5 );
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bchr, tmp_assign_source_6 );
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bstr, tmp_assign_source_7 );
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bord, tmp_assign_source_8 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 74;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;

                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  );



                UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_9 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  );



                UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_10 );
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_11 );
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bchr, tmp_assign_source_12 );
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bstr, tmp_assign_source_13 );
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bord, tmp_assign_source_14 );
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  );



            UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_15 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac61e0b9a2cd5f831e673138d32a9e2a );
#endif
    popFrameStack();

    assertFrameObject( frame_ac61e0b9a2cd5f831e673138d32a9e2a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac61e0b9a2cd5f831e673138d32a9e2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac61e0b9a2cd5f831e673138d32a9e2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac61e0b9a2cd5f831e673138d32a9e2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac61e0b9a2cd5f831e673138d32a9e2a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Crypto$Util$py3compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
