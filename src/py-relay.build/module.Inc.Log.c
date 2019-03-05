/* Generated code for Python module 'Inc.Log'
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

/* The "_module_Inc$Log" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Inc$Log;
PyDictObject *moduledict_Inc$Log;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_MyConsole;
static PyObject *const_str_plain_INFO;
extern PyObject *const_str_plain_aType;
static PyObject *const_list_str_plain_TLog_str_plain_Log_list;
static PyObject *const_str_plain_a;
static PyObject *const_str_digest_227b2eacfdf57329f6f37cd20cacfb2f;
extern PyObject *const_str_plain_aMsg;
static PyObject *const_str_plain_List;
extern PyObject *const_str_plain_LogLevel;
static PyObject *const_str_plain__Parse;
static PyObject *const_str_plain_basicConfig;
static PyObject *const_str_plain_Warn;
extern PyObject *const_str_plain_Log;
extern PyObject *const_str_plain_Dict;
static PyObject *const_str_digest_c000c04bc820da598852786342aff20b;
extern PyObject *const_str_plain_aParam;
static PyObject *const_str_plain_Format;
extern PyObject *const_str_plain_Print;
static PyObject *const_str_digest_30dd1cd78b9892280c8261c743ff72c1;
static PyObject *const_tuple_str_plain_MyConsole_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_SetTail;
static PyObject *const_str_plain_Tail;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_E;
extern PyObject *const_str_plain_level;
static PyObject *const_str_plain_filemode;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_error;
static PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple;
static PyObject *const_str_plain_addHandler;
static PyObject *const_str_plain_datefmt;
static PyObject *const_str_plain_getLogger;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Result;
extern PyObject *const_tuple_str_plain_self_str_plain_aValue_tuple;
static PyObject *const_str_digest_444b2be1a97b0b77d9e653b04303746c;
extern PyObject *const_str_plain_aFile;
static PyObject *const_str_digest_35e9b546077acb5882a15818269e87bc;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_SetConsole;
static PyObject *const_str_plain_TLog;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain_exception;
extern PyObject *const_str_plain_Param;
extern PyObject *const_str_digest_bf31fbca22bb3b1bbc45444e386bf3bf;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_aValue;
extern PyObject *const_str_plain_dict;
static PyObject *const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple;
static PyObject *const_str_digest_7bc75c1e8b65ceef92296230a69ea957;
extern PyObject *const_str_plain_SetFile;
static PyObject *const_tuple_02760e66ddd450ce005aecd437f45460_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_aLevel;
static PyObject *const_str_plain_OnPrint;
static PyObject *const_str_digest_9c4803bf366dfac8db4a5abde5479757;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_Logger;
extern PyObject *const_str_plain_w;
static PyObject *const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple;
static PyObject *const_str_plain_logging;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_MyConsole = UNSTREAM_STRING( &constant_bin[ 18772 ], 9, 1 );
    const_str_plain_INFO = UNSTREAM_STRING( &constant_bin[ 18781 ], 4, 1 );
    const_list_str_plain_TLog_str_plain_Log_list = PyList_New( 2 );
    const_str_plain_TLog = UNSTREAM_STRING( &constant_bin[ 18785 ], 4, 1 );
    PyList_SET_ITEM( const_list_str_plain_TLog_str_plain_Log_list, 0, const_str_plain_TLog ); Py_INCREF( const_str_plain_TLog );
    PyList_SET_ITEM( const_list_str_plain_TLog_str_plain_Log_list, 1, const_str_plain_Log ); Py_INCREF( const_str_plain_Log );
    const_str_plain_a = UNSTREAM_CHAR( 97, 1 );
    const_str_digest_227b2eacfdf57329f6f37cd20cacfb2f = UNSTREAM_STRING( &constant_bin[ 18789 ], 49, 0 );
    const_str_plain_List = UNSTREAM_STRING( &constant_bin[ 2137 ], 4, 1 );
    const_str_plain__Parse = UNSTREAM_STRING( &constant_bin[ 18838 ], 6, 1 );
    const_str_plain_basicConfig = UNSTREAM_STRING( &constant_bin[ 18844 ], 11, 1 );
    const_str_plain_Warn = UNSTREAM_STRING( &constant_bin[ 18855 ], 4, 1 );
    const_str_digest_c000c04bc820da598852786342aff20b = UNSTREAM_STRING( &constant_bin[ 18859 ], 16, 0 );
    const_str_plain_Format = UNSTREAM_STRING( &constant_bin[ 18875 ], 6, 1 );
    const_str_digest_30dd1cd78b9892280c8261c743ff72c1 = UNSTREAM_STRING( &constant_bin[ 18881 ], 26, 0 );
    const_tuple_str_plain_MyConsole_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MyConsole_tuple, 0, const_str_plain_MyConsole ); Py_INCREF( const_str_plain_MyConsole );
    const_str_plain_SetTail = UNSTREAM_STRING( &constant_bin[ 18907 ], 7, 1 );
    const_str_plain_Tail = UNSTREAM_STRING( &constant_bin[ 18831 ], 4, 1 );
    const_str_plain_filemode = UNSTREAM_STRING( &constant_bin[ 18914 ], 8, 1 );
    const_str_plain_error = UNSTREAM_STRING( &constant_bin[ 18922 ], 5, 1 );
    const_str_plain_warn = UNSTREAM_STRING( &constant_bin[ 18927 ], 4, 1 );
    const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_aLevel = UNSTREAM_STRING( &constant_bin[ 18931 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple, 1, const_str_plain_aLevel ); Py_INCREF( const_str_plain_aLevel );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple, 2, const_str_plain_aMsg ); Py_INCREF( const_str_plain_aMsg );
    const_str_plain_addHandler = UNSTREAM_STRING( &constant_bin[ 18937 ], 10, 1 );
    const_str_plain_datefmt = UNSTREAM_STRING( &constant_bin[ 18947 ], 7, 1 );
    const_str_plain_getLogger = UNSTREAM_STRING( &constant_bin[ 18954 ], 9, 1 );
    const_str_digest_444b2be1a97b0b77d9e653b04303746c = UNSTREAM_STRING( &constant_bin[ 18963 ], 40, 0 );
    const_str_digest_35e9b546077acb5882a15818269e87bc = UNSTREAM_STRING( &constant_bin[ 19003 ], 51, 0 );
    const_str_plain_filename = UNSTREAM_STRING( &constant_bin[ 19054 ], 8, 1 );
    const_str_plain_exception = UNSTREAM_STRING( &constant_bin[ 9557 ], 9, 1 );
    const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 1, const_str_plain_aFile ); Py_INCREF( const_str_plain_aFile );
    PyTuple_SET_ITEM( const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 2, const_str_plain_Format ); Py_INCREF( const_str_plain_Format );
    PyTuple_SET_ITEM( const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 3, const_str_plain_E ); Py_INCREF( const_str_plain_E );
    PyTuple_SET_ITEM( const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 4, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_digest_7bc75c1e8b65ceef92296230a69ea957 = UNSTREAM_STRING( &constant_bin[ 19062 ], 17, 0 );
    const_tuple_02760e66ddd450ce005aecd437f45460_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 1, const_str_plain_aLevel ); Py_INCREF( const_str_plain_aLevel );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 2, const_str_plain_aType ); Py_INCREF( const_str_plain_aType );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 3, const_str_plain_aParam ); Py_INCREF( const_str_plain_aParam );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 4, const_str_plain_List ); Py_INCREF( const_str_plain_List );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 5, const_str_plain_Dict ); Py_INCREF( const_str_plain_Dict );
    PyTuple_SET_ITEM( const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 6, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_plain_StreamHandler = UNSTREAM_STRING( &constant_bin[ 19079 ], 13, 1 );
    const_str_plain_OnPrint = UNSTREAM_STRING( &constant_bin[ 19092 ], 7, 1 );
    const_str_digest_9c4803bf366dfac8db4a5abde5479757 = UNSTREAM_STRING( &constant_bin[ 19099 ], 170, 0 );
    const_str_plain_Logger = UNSTREAM_STRING( &constant_bin[ 18957 ], 6, 1 );
    const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 1, const_str_plain_aParam ); Py_INCREF( const_str_plain_aParam );
    PyTuple_SET_ITEM( const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 2, const_str_plain_Dict ); Py_INCREF( const_str_plain_Dict );
    PyTuple_SET_ITEM( const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 3, const_str_plain_List ); Py_INCREF( const_str_plain_List );
    PyTuple_SET_ITEM( const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 4, const_str_plain_Param ); Py_INCREF( const_str_plain_Param );
    const_str_plain_logging = UNSTREAM_STRING( &constant_bin[ 19269 ], 7, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Inc$Log( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7686b9eb2f447c2079cf67675c29e815;
static PyCodeObject *codeobj_ddbeb7c09a1529ed9afe754bfc9f30b0;
static PyCodeObject *codeobj_669871e3df7b41bb855e382d1f26ef0d;
static PyCodeObject *codeobj_24529e6067dbd744c6068aac8e155538;
static PyCodeObject *codeobj_a159a6f653c530cb734642c4f6717796;
static PyCodeObject *codeobj_5a5cdbf2c704e09de0d78cd7a5221508;
static PyCodeObject *codeobj_978d109020a30b791500c614f4a08449;
static PyCodeObject *codeobj_a24014f98ac776e2a60614603c5dd5c6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_35e9b546077acb5882a15818269e87bc;
    codeobj_7686b9eb2f447c2079cf67675c29e815 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c000c04bc820da598852786342aff20b, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_ddbeb7c09a1529ed9afe754bfc9f30b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Print, 32, const_tuple_02760e66ddd450ce005aecd437f45460_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_669871e3df7b41bb855e382d1f26ef0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetConsole, 55, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24529e6067dbd744c6068aac8e155538 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetFile, 62, const_tuple_c7261b9f867433cae382b4469fc0e2ba_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a159a6f653c530cb734642c4f6717796 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetTail, 81, const_tuple_str_plain_self_str_plain_aValue_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a5cdbf2c704e09de0d78cd7a5221508 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Warn, 52, const_tuple_str_plain_self_str_plain_aLevel_str_plain_aMsg_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_978d109020a30b791500c614f4a08449 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__Parse, 21, const_tuple_2ffb2b28edcca096c53ee7bf83b4451b_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_a24014f98ac776e2a60614603c5dd5c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 15, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_2__Parse(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_3_Print(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_4_Warn(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_5_SetConsole(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_6_SetFile(  );


static PyObject *MAKE_FUNCTION_Inc$Log$$$function_7_SetTail(  );


// The module function definitions.
static PyObject *impl_Inc$Log$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a24014f98ac776e2a60614603c5dd5c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a24014f98ac776e2a60614603c5dd5c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a24014f98ac776e2a60614603c5dd5c6, codeobj_a24014f98ac776e2a60614603c5dd5c6, module_Inc$Log, sizeof(void *) );
    frame_a24014f98ac776e2a60614603c5dd5c6 = cache_frame_a24014f98ac776e2a60614603c5dd5c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a24014f98ac776e2a60614603c5dd5c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a24014f98ac776e2a60614603c5dd5c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_LogLevel, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_OnPrint, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_str_empty;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_Tail, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_Logger, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a24014f98ac776e2a60614603c5dd5c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a24014f98ac776e2a60614603c5dd5c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a24014f98ac776e2a60614603c5dd5c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a24014f98ac776e2a60614603c5dd5c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a24014f98ac776e2a60614603c5dd5c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a24014f98ac776e2a60614603c5dd5c6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a24014f98ac776e2a60614603c5dd5c6 == cache_frame_a24014f98ac776e2a60614603c5dd5c6 )
    {
        Py_DECREF( frame_a24014f98ac776e2a60614603c5dd5c6 );
    }
    cache_frame_a24014f98ac776e2a60614603c5dd5c6 = NULL;

    assertFrameObject( frame_a24014f98ac776e2a60614603c5dd5c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_1___init__ );
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


static PyObject *impl_Inc$Log$$$function_2__Parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aParam = python_pars[ 1 ];
    PyObject *var_Dict = NULL;
    PyObject *var_List = NULL;
    PyObject *var_Param = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_978d109020a30b791500c614f4a08449;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_978d109020a30b791500c614f4a08449 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_List == NULL );
        var_List = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert( var_Dict == NULL );
        var_Dict = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_978d109020a30b791500c614f4a08449, codeobj_978d109020a30b791500c614f4a08449, module_Inc$Log, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_978d109020a30b791500c614f4a08449 = cache_frame_978d109020a30b791500c614f4a08449;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_978d109020a30b791500c614f4a08449 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_978d109020a30b791500c614f4a08449 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_aParam );
        tmp_iter_arg_1 = par_aParam;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 24;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_Param;
            var_Param = tmp_assign_source_5;
            Py_INCREF( var_Param );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( var_Param );
        tmp_type_arg_1 = var_Param;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_compexpr_right_1 = (PyObject *)&PyDict_Type;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_Dict );
            tmp_called_instance_1 = var_Dict;
            CHECK_OBJECT( var_Param );
            tmp_args_element_name_1 = var_Param;
            frame_978d109020a30b791500c614f4a08449->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_List );
            tmp_called_instance_2 = var_List;
            CHECK_OBJECT( var_Param );
            tmp_args_element_name_2 = var_Param;
            frame_978d109020a30b791500c614f4a08449->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_978d109020a30b791500c614f4a08449 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_978d109020a30b791500c614f4a08449 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_978d109020a30b791500c614f4a08449, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_978d109020a30b791500c614f4a08449->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_978d109020a30b791500c614f4a08449, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_978d109020a30b791500c614f4a08449,
        type_description_1,
        par_self,
        par_aParam,
        var_Dict,
        var_List,
        var_Param
    );


    // Release cached frame.
    if ( frame_978d109020a30b791500c614f4a08449 == cache_frame_978d109020a30b791500c614f4a08449 )
    {
        Py_DECREF( frame_978d109020a30b791500c614f4a08449 );
    }
    cache_frame_978d109020a30b791500c614f4a08449 = NULL;

    assertFrameObject( frame_978d109020a30b791500c614f4a08449 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_List );
        tmp_tuple_element_1 = var_List;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_Dict );
        tmp_tuple_element_1 = var_Dict;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_2__Parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Dict );
    Py_DECREF( var_Dict );
    var_Dict = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_List );
    Py_DECREF( var_List );
    var_List = NULL;

    Py_XDECREF( var_Param );
    var_Param = NULL;

    CHECK_OBJECT( (PyObject *)par_aParam );
    Py_DECREF( par_aParam );
    par_aParam = NULL;

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

    CHECK_OBJECT( (PyObject *)var_Dict );
    Py_DECREF( var_Dict );
    var_Dict = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_List );
    Py_DECREF( var_List );
    var_List = NULL;

    Py_XDECREF( var_Param );
    var_Param = NULL;

    CHECK_OBJECT( (PyObject *)par_aParam );
    Py_DECREF( par_aParam );
    par_aParam = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_2__Parse );
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


static PyObject *impl_Inc$Log$$$function_3_Print( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aLevel = python_pars[ 1 ];
    PyObject *par_aType = python_pars[ 2 ];
    PyObject *par_aParam = python_pars[ 3 ];
    PyObject *var_List = NULL;
    PyObject *var_Dict = NULL;
    PyObject *var_Result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ddbeb7c09a1529ed9afe754bfc9f30b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ddbeb7c09a1529ed9afe754bfc9f30b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ddbeb7c09a1529ed9afe754bfc9f30b0, codeobj_ddbeb7c09a1529ed9afe754bfc9f30b0, module_Inc$Log, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ddbeb7c09a1529ed9afe754bfc9f30b0 = cache_frame_ddbeb7c09a1529ed9afe754bfc9f30b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_aLevel );
        tmp_compexpr_left_1 = par_aLevel;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LogLevel );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_dircall_arg2_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__Parse );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_aParam );
            tmp_dircall_arg2_1 = par_aParam;
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_iter_arg_1 = impl___internal__$$$function_4_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_2 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 34;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
            if ( tmp_assign_source_3 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 34;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooo";
                        exception_lineno = 34;
                        goto try_except_handler_3;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooo";
                exception_lineno = 34;
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
            assert( var_List == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_List = tmp_assign_source_4;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
            assert( var_Dict == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_Dict = tmp_assign_source_5;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_str_digest_227b2eacfdf57329f6f37cd20cacfb2f;
            CHECK_OBJECT( par_aLevel );
            tmp_tuple_element_1 = par_aLevel;
            tmp_right_name_1 = PyTuple_New( 5 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_aType );
            tmp_tuple_element_1 = par_aType;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_List );
            tmp_list_arg_1 = var_List;
            tmp_tuple_element_1 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 35;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_Dict );
            tmp_tuple_element_1 = var_Dict;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Tail );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 35;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 4, tmp_tuple_element_1 );
            tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Result == NULL );
            var_Result = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_aType );
            tmp_compexpr_left_2 = par_aType;
            tmp_compexpr_right_2 = const_str_plain_w;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_source_name_4;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Logger );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_Result );
                tmp_args_element_name_1 = var_Result;
                frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame.f_lineno = 38;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_warn, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 38;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_aType );
                tmp_compexpr_left_3 = par_aType;
                tmp_compexpr_right_3 = const_str_plain_e;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 39;
                    type_description_1 = "ooooooo";
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
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_5 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Logger );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 40;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_Result );
                    tmp_args_element_name_2 = var_Result;
                    frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame.f_lineno = 40;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_error, call_args );
                    }

                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 40;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    CHECK_OBJECT( par_aType );
                    tmp_compexpr_left_4 = par_aType;
                    tmp_compexpr_right_4 = const_str_plain_x;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 41;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_4;
                    }
                    else
                    {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_source_name_6;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_3;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_6 = par_self;
                        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Logger );
                        if ( tmp_called_instance_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 42;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_Result );
                        tmp_args_element_name_3 = var_Result;
                        frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame.f_lineno = 42;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_3 };
                            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_exception, call_args );
                        }

                        Py_DECREF( tmp_called_instance_3 );
                        if ( tmp_call_result_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 42;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_3 );
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_source_name_7;
                        PyObject *tmp_call_result_4;
                        PyObject *tmp_args_element_name_4;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_7 = par_self;
                        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Logger );
                        if ( tmp_called_instance_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 44;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_Result );
                        tmp_args_element_name_4 = var_Result;
                        frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame.f_lineno = 44;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_4 };
                            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_info, call_args );
                        }

                        Py_DECREF( tmp_called_instance_4 );
                        if ( tmp_call_result_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 44;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF( tmp_call_result_4 );
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OnPrint );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 46;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_self );
                tmp_called_instance_5 = par_self;
                CHECK_OBJECT( par_aLevel );
                tmp_args_element_name_5 = par_aLevel;
                CHECK_OBJECT( par_aType );
                tmp_args_element_name_6 = par_aType;
                CHECK_OBJECT( var_Dict );
                tmp_args_element_name_7 = var_Dict;
                frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame.f_lineno = 47;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_5, const_str_plain_OnPrint, call_args );
                }

                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 47;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_no_5:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_empty;
            assert( var_Result == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_Result = tmp_assign_source_7;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ddbeb7c09a1529ed9afe754bfc9f30b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ddbeb7c09a1529ed9afe754bfc9f30b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ddbeb7c09a1529ed9afe754bfc9f30b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ddbeb7c09a1529ed9afe754bfc9f30b0,
        type_description_1,
        par_self,
        par_aLevel,
        par_aType,
        par_aParam,
        var_List,
        var_Dict,
        var_Result
    );


    // Release cached frame.
    if ( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 == cache_frame_ddbeb7c09a1529ed9afe754bfc9f30b0 )
    {
        Py_DECREF( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 );
    }
    cache_frame_ddbeb7c09a1529ed9afe754bfc9f30b0 = NULL;

    assertFrameObject( frame_ddbeb7c09a1529ed9afe754bfc9f30b0 );

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
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_3_Print );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aParam );
    Py_DECREF( par_aParam );
    par_aParam = NULL;

    CHECK_OBJECT( (PyObject *)par_aLevel );
    Py_DECREF( par_aLevel );
    par_aLevel = NULL;

    CHECK_OBJECT( (PyObject *)par_aType );
    Py_DECREF( par_aType );
    par_aType = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_List );
    var_List = NULL;

    Py_XDECREF( var_Dict );
    var_Dict = NULL;

    CHECK_OBJECT( (PyObject *)var_Result );
    Py_DECREF( var_Result );
    var_Result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_aParam );
    Py_DECREF( par_aParam );
    par_aParam = NULL;

    CHECK_OBJECT( (PyObject *)par_aLevel );
    Py_DECREF( par_aLevel );
    par_aLevel = NULL;

    CHECK_OBJECT( (PyObject *)par_aType );
    Py_DECREF( par_aType );
    par_aType = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_List );
    var_List = NULL;

    Py_XDECREF( var_Dict );
    var_Dict = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_3_Print );
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


static PyObject *impl_Inc$Log$$$function_4_Warn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aLevel = python_pars[ 1 ];
    PyObject *par_aMsg = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_5a5cdbf2c704e09de0d78cd7a5221508;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a5cdbf2c704e09de0d78cd7a5221508 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a5cdbf2c704e09de0d78cd7a5221508, codeobj_5a5cdbf2c704e09de0d78cd7a5221508, module_Inc$Log, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a5cdbf2c704e09de0d78cd7a5221508 = cache_frame_5a5cdbf2c704e09de0d78cd7a5221508;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a5cdbf2c704e09de0d78cd7a5221508 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a5cdbf2c704e09de0d78cd7a5221508 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_aLevel );
        tmp_args_element_name_1 = par_aLevel;
        tmp_args_element_name_2 = const_str_plain_w;
        CHECK_OBJECT( par_aMsg );
        tmp_list_element_1 = par_aMsg;
        tmp_args_element_name_3 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
        frame_5a5cdbf2c704e09de0d78cd7a5221508->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_Print, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a5cdbf2c704e09de0d78cd7a5221508 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a5cdbf2c704e09de0d78cd7a5221508 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a5cdbf2c704e09de0d78cd7a5221508, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a5cdbf2c704e09de0d78cd7a5221508->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a5cdbf2c704e09de0d78cd7a5221508, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a5cdbf2c704e09de0d78cd7a5221508,
        type_description_1,
        par_self,
        par_aLevel,
        par_aMsg
    );


    // Release cached frame.
    if ( frame_5a5cdbf2c704e09de0d78cd7a5221508 == cache_frame_5a5cdbf2c704e09de0d78cd7a5221508 )
    {
        Py_DECREF( frame_5a5cdbf2c704e09de0d78cd7a5221508 );
    }
    cache_frame_5a5cdbf2c704e09de0d78cd7a5221508 = NULL;

    assertFrameObject( frame_5a5cdbf2c704e09de0d78cd7a5221508 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_4_Warn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aMsg );
    Py_DECREF( par_aMsg );
    par_aMsg = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aLevel );
    Py_DECREF( par_aLevel );
    par_aLevel = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_aLevel );
    Py_DECREF( par_aLevel );
    par_aLevel = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_4_Warn );
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


static PyObject *impl_Inc$Log$$$function_5_SetConsole( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_669871e3df7b41bb855e382d1f26ef0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_669871e3df7b41bb855e382d1f26ef0d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_669871e3df7b41bb855e382d1f26ef0d, codeobj_669871e3df7b41bb855e382d1f26ef0d, module_Inc$Log, sizeof(void *) );
    frame_669871e3df7b41bb855e382d1f26ef0d = cache_frame_669871e3df7b41bb855e382d1f26ef0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_669871e3df7b41bb855e382d1f26ef0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_669871e3df7b41bb855e382d1f26ef0d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_669871e3df7b41bb855e382d1f26ef0d->m_frame.f_lineno = 56;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_MyConsole_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_Logger, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Logger );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addHandler );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_669871e3df7b41bb855e382d1f26ef0d->m_frame.f_lineno = 57;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_StreamHandler );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_669871e3df7b41bb855e382d1f26ef0d->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669871e3df7b41bb855e382d1f26ef0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_669871e3df7b41bb855e382d1f26ef0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_669871e3df7b41bb855e382d1f26ef0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_669871e3df7b41bb855e382d1f26ef0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_669871e3df7b41bb855e382d1f26ef0d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_669871e3df7b41bb855e382d1f26ef0d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_669871e3df7b41bb855e382d1f26ef0d == cache_frame_669871e3df7b41bb855e382d1f26ef0d )
    {
        Py_DECREF( frame_669871e3df7b41bb855e382d1f26ef0d );
    }
    cache_frame_669871e3df7b41bb855e382d1f26ef0d = NULL;

    assertFrameObject( frame_669871e3df7b41bb855e382d1f26ef0d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_5_SetConsole );
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
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_5_SetConsole );
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


static PyObject *impl_Inc$Log$$$function_6_SetFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aFile = python_pars[ 1 ];
    PyObject *var_E = NULL;
    nuitka_bool var_Result = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_24529e6067dbd744c6068aac8e155538;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_print_value;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_24529e6067dbd744c6068aac8e155538 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        var_Result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24529e6067dbd744c6068aac8e155538, codeobj_24529e6067dbd744c6068aac8e155538, module_Inc$Log, sizeof(void *)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24529e6067dbd744c6068aac8e155538 = cache_frame_24529e6067dbd744c6068aac8e155538;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24529e6067dbd744c6068aac8e155538 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24529e6067dbd744c6068aac8e155538 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 69;
            type_description_1 = "ooNob";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_basicConfig );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooNob";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 70;
            type_description_1 = "ooNob";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_INFO );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 70;
            type_description_1 = "ooNob";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_level;
        tmp_kw_name_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_str_digest_444b2be1a97b0b77d9e653b04303746c;
        tmp_dict_key_2 = const_str_plain_format;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_3 = const_str_digest_7bc75c1e8b65ceef92296230a69ea957;
        tmp_dict_key_3 = const_str_plain_datefmt;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_aFile );
        tmp_dict_value_4 = par_aFile;
        tmp_dict_key_4 = const_str_plain_filename;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_5 = const_str_plain_a;
        tmp_dict_key_5 = const_str_plain_filemode;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_24529e6067dbd744c6068aac8e155538->m_frame.f_lineno = 69;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "ooNob";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        var_Result = tmp_assign_source_2;
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
    PRESERVE_FRAME_EXCEPTION( frame_24529e6067dbd744c6068aac8e155538 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_24529e6067dbd744c6068aac8e155538, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_24529e6067dbd744c6068aac8e155538, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_IOError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooNob";
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
            assert( var_E == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_E = tmp_assign_source_3;
        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            tmp_left_name_1 = const_str_digest_30dd1cd78b9892280c8261c743ff72c1;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooNob";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooNob";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_E );
            tmp_tuple_element_1 = var_E;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( par_aFile );
            tmp_tuple_element_1 = par_aFile;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
            tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_print_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooNob";
                goto frame_exception_exit_1;
            }
            tmp_result = PRINT_ITEM( tmp_print_value );
            Py_DECREF( tmp_print_value );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooNob";
                goto frame_exception_exit_1;
            }
        }
        if ( PRINT_NEW_LINE() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooNob";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 68;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_24529e6067dbd744c6068aac8e155538->m_frame) frame_24529e6067dbd744c6068aac8e155538->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooNob";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_6_SetFile );
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_24529e6067dbd744c6068aac8e155538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_24529e6067dbd744c6068aac8e155538 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24529e6067dbd744c6068aac8e155538, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24529e6067dbd744c6068aac8e155538->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24529e6067dbd744c6068aac8e155538, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24529e6067dbd744c6068aac8e155538,
        type_description_1,
        par_self,
        par_aFile,
        NULL,
        var_E,
        (int)var_Result
    );


    // Release cached frame.
    if ( frame_24529e6067dbd744c6068aac8e155538 == cache_frame_24529e6067dbd744c6068aac8e155538 )
    {
        Py_DECREF( frame_24529e6067dbd744c6068aac8e155538 );
    }
    cache_frame_24529e6067dbd744c6068aac8e155538 = NULL;

    assertFrameObject( frame_24529e6067dbd744c6068aac8e155538 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    assert( var_Result != NUITKA_BOOL_UNASSIGNED);
    tmp_return_value = ( var_Result == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_6_SetFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_E );
    var_E = NULL;

    CHECK_OBJECT( (PyObject *)par_aFile );
    Py_DECREF( par_aFile );
    par_aFile = NULL;

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

    Py_XDECREF( var_E );
    var_E = NULL;

    CHECK_OBJECT( (PyObject *)par_aFile );
    Py_DECREF( par_aFile );
    par_aFile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_6_SetFile );
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


static PyObject *impl_Inc$Log$$$function_7_SetTail( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aValue = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a159a6f653c530cb734642c4f6717796;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a159a6f653c530cb734642c4f6717796 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a159a6f653c530cb734642c4f6717796, codeobj_a159a6f653c530cb734642c4f6717796, module_Inc$Log, sizeof(void *)+sizeof(void *) );
    frame_a159a6f653c530cb734642c4f6717796 = cache_frame_a159a6f653c530cb734642c4f6717796;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a159a6f653c530cb734642c4f6717796 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a159a6f653c530cb734642c4f6717796 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_aValue );
        tmp_assattr_name_1 = par_aValue;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_Tail, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a159a6f653c530cb734642c4f6717796 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a159a6f653c530cb734642c4f6717796 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a159a6f653c530cb734642c4f6717796, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a159a6f653c530cb734642c4f6717796->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a159a6f653c530cb734642c4f6717796, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a159a6f653c530cb734642c4f6717796,
        type_description_1,
        par_self,
        par_aValue
    );


    // Release cached frame.
    if ( frame_a159a6f653c530cb734642c4f6717796 == cache_frame_a159a6f653c530cb734642c4f6717796 )
    {
        Py_DECREF( frame_a159a6f653c530cb734642c4f6717796 );
    }
    cache_frame_a159a6f653c530cb734642c4f6717796 = NULL;

    assertFrameObject( frame_a159a6f653c530cb734642c4f6717796 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_7_SetTail );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( Inc$Log$$$function_7_SetTail );
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



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a24014f98ac776e2a60614603c5dd5c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_2__Parse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_2__Parse,
        const_str_plain__Parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_978d109020a30b791500c614f4a08449,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_3_Print(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_3_Print,
        const_str_plain_Print,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ddbeb7c09a1529ed9afe754bfc9f30b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_4_Warn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_4_Warn,
        const_str_plain_Warn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a5cdbf2c704e09de0d78cd7a5221508,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_5_SetConsole(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_5_SetConsole,
        const_str_plain_SetConsole,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_669871e3df7b41bb855e382d1f26ef0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_6_SetFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_6_SetFile,
        const_str_plain_SetFile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_24529e6067dbd744c6068aac8e155538,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Log$$$function_7_SetTail(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Log$$$function_7_SetTail,
        const_str_plain_SetTail,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a159a6f653c530cb734642c4f6717796,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Log,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Inc$Log =
{
    PyModuleDef_HEAD_INIT,
    "Inc.Log",
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

MOD_INIT_DECL( Inc$Log )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Inc$Log );
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
    puts("Inc.Log: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Log: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Log: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initInc$Log" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Inc$Log = Py_InitModule4(
        "Inc.Log",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Inc$Log = PyModule_Create( &mdef_Inc$Log );
#endif

    moduledict_Inc$Log = MODULE_DICT( module_Inc$Log );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Inc$Log,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Inc$Log,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Log,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Log,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Inc$Log );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_bf31fbca22bb3b1bbc45444e386bf3bf, module_Inc$Log );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_Inc$Log_14_key_Print = NULL;
    PyObject *tmp_locals_Inc$Log_14_key_SetConsole = NULL;
    PyObject *tmp_locals_Inc$Log_14_key_SetFile = NULL;
    PyObject *tmp_locals_Inc$Log_14_key_SetTail = NULL;
    PyObject *tmp_locals_Inc$Log_14_key_Warn = NULL;
    PyObject *tmp_locals_Inc$Log_14_key__Parse = NULL;
    PyObject *tmp_locals_Inc$Log_14_key___init__ = NULL;
    struct Nuitka_FrameObject *frame_7686b9eb2f447c2079cf67675c29e815;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_9c4803bf366dfac8db4a5abde5479757;
        UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_35e9b546077acb5882a15818269e87bc;
        UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_7686b9eb2f447c2079cf67675c29e815 = MAKE_MODULE_FRAME( codeobj_7686b9eb2f447c2079cf67675c29e815, module_Inc$Log );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7686b9eb2f447c2079cf67675c29e815 );
    assert( Py_REFCNT( frame_7686b9eb2f447c2079cf67675c29e815 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_Inc$Log;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_7686b9eb2f447c2079cf67675c29e815->m_frame.f_lineno = 9;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_str_plain_TLog_str_plain_Log_list );
        UPDATE_STRING_DICT1( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_Inc$Log$$$function_1___init__(  );



            assert( tmp_locals_Inc$Log_14_key___init__ == NULL );
            tmp_locals_Inc$Log_14_key___init__ = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_Inc$Log$$$function_2__Parse(  );



            assert( tmp_locals_Inc$Log_14_key__Parse == NULL );
            tmp_locals_Inc$Log_14_key__Parse = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_Inc$Log$$$function_3_Print(  );



            assert( tmp_locals_Inc$Log_14_key_Print == NULL );
            tmp_locals_Inc$Log_14_key_Print = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_Inc$Log$$$function_4_Warn(  );



            assert( tmp_locals_Inc$Log_14_key_Warn == NULL );
            tmp_locals_Inc$Log_14_key_Warn = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_Inc$Log$$$function_5_SetConsole(  );



            assert( tmp_locals_Inc$Log_14_key_SetConsole == NULL );
            tmp_locals_Inc$Log_14_key_SetConsole = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_Inc$Log$$$function_6_SetFile(  );



            assert( tmp_locals_Inc$Log_14_key_SetFile == NULL );
            tmp_locals_Inc$Log_14_key_SetFile = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_Inc$Log$$$function_7_SetTail(  );



            assert( tmp_locals_Inc$Log_14_key_SetTail == NULL );
            tmp_locals_Inc$Log_14_key_SetTail = tmp_assign_source_12;
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
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_value_1 = const_str_digest_bf31fbca22bb3b1bbc45444e386bf3bf;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_5 = _PyDict_NewPresized( 8 );
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key___init__ );
            tmp_dict_value_2 = tmp_locals_Inc$Log_14_key___init__;
            tmp_dict_key_2 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key__Parse );
            tmp_dict_value_3 = tmp_locals_Inc$Log_14_key__Parse;
            tmp_dict_key_3 = const_str_plain__Parse;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key_Print );
            tmp_dict_value_4 = tmp_locals_Inc$Log_14_key_Print;
            tmp_dict_key_4 = const_str_plain_Print;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key_Warn );
            tmp_dict_value_5 = tmp_locals_Inc$Log_14_key_Warn;
            tmp_dict_key_5 = const_str_plain_Warn;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key_SetConsole );
            tmp_dict_value_6 = tmp_locals_Inc$Log_14_key_SetConsole;
            tmp_dict_key_6 = const_str_plain_SetConsole;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key_SetFile );
            tmp_dict_value_7 = tmp_locals_Inc$Log_14_key_SetFile;
            tmp_dict_key_7 = const_str_plain_SetFile;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Inc$Log_14_key_SetTail );
            tmp_dict_value_8 = tmp_locals_Inc$Log_14_key_SetTail;
            tmp_dict_key_8 = const_str_plain_SetTail;
            tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Log );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key___init__ );
        Py_DECREF( tmp_locals_Inc$Log_14_key___init__ );
        tmp_locals_Inc$Log_14_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key__Parse );
        Py_DECREF( tmp_locals_Inc$Log_14_key__Parse );
        tmp_locals_Inc$Log_14_key__Parse = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key_Print );
        Py_DECREF( tmp_locals_Inc$Log_14_key_Print );
        tmp_locals_Inc$Log_14_key_Print = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key_Warn );
        Py_DECREF( tmp_locals_Inc$Log_14_key_Warn );
        tmp_locals_Inc$Log_14_key_Warn = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key_SetConsole );
        Py_DECREF( tmp_locals_Inc$Log_14_key_SetConsole );
        tmp_locals_Inc$Log_14_key_SetConsole = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key_SetFile );
        Py_DECREF( tmp_locals_Inc$Log_14_key_SetFile );
        tmp_locals_Inc$Log_14_key_SetFile = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Inc$Log_14_key_SetTail );
        Py_DECREF( tmp_locals_Inc$Log_14_key_SetTail );
        tmp_locals_Inc$Log_14_key_SetTail = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Log );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 14;

            goto try_except_handler_2;
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
        tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___metaclass__ );

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

                exception_lineno = 14;

                goto try_except_handler_3;
            }

            tmp_assign_source_13 = tmp_mvar_value_1;
            Py_INCREF( tmp_assign_source_13 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Inc$Log );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        tmp_assign_source_13 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_13 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Inc$Log );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_TLog;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_7686b9eb2f447c2079cf67675c29e815->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_14;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_15 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_TLog, tmp_assign_source_15 );
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

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_TLog );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TLog );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "TLog" );
            exception_tb = NULL;

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_7686b9eb2f447c2079cf67675c29e815->m_frame.f_lineno = 84;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain_Log, tmp_assign_source_16 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7686b9eb2f447c2079cf67675c29e815 );
#endif
    popFrameStack();

    assertFrameObject( frame_7686b9eb2f447c2079cf67675c29e815 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7686b9eb2f447c2079cf67675c29e815 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7686b9eb2f447c2079cf67675c29e815, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7686b9eb2f447c2079cf67675c29e815->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7686b9eb2f447c2079cf67675c29e815, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Inc$Log, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Inc$Log );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
