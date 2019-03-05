/* Generated code for Python module 'MySQLdb'
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

/* The "_module_MySQLdb" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb;
PyDictObject *moduledict_MySQLdb;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_sets;
static PyObject *const_str_plain_apilevel;
extern PyObject *const_str_plain_Timestamp;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain__mysql;
extern PyObject *const_str_plain_Connect;
static PyObject *const_str_plain_paramstyle;
extern PyObject *const_str_plain_TIME;
static PyObject *const_str_plain_NUMBER;
extern PyObject *const_str_plain_MEDIUM_BLOB;
extern PyObject *const_str_digest_6e1b9039a1198642c91d743e9550d006;
static PyObject *const_str_plain_test_DBAPISet_set_inequality;
extern PyObject *const_str_plain_LONGLONG;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_DOUBLE;
extern PyObject *const_str_digest_e16b0126d837ce7ad3b9f1fbd3704965;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_ROWID;
static PyObject *const_str_digest_fda88c3a37e390255aa0372a9c648cf3;
static PyObject *const_str_plain_difference;
extern PyObject *const_str_plain_TimestampFromTicks;
extern PyObject *const_str_plain_DECIMAL;
extern PyObject *const_str_plain_Date;
extern PyObject *const_str_plain_VAR_STRING;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_DBAPISet;
static PyObject *const_str_digest_631e719cd88db280f9d14ba287335e85;
extern PyObject *const_str_plain_STRING;
static PyObject *const_str_digest_20306770f5ec770a3e4eb5aaea87ebd7;
extern PyObject *const_str_plain_DATE;
extern PyObject *const_str_digest_05cd2a7a408dc6619e97d739b1ced7db;
static PyObject *const_str_digest_85341a9af8c54a5d7f0ca5b2675c158b;
static PyObject *const_tuple_str_plain_Connection_tuple;
static PyObject *const_str_plain_threadsafety;
static PyObject *const_tuple_str_plain__mysql_tuple;
static PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_TINY_BLOB;
static PyObject *const_str_digest_8b499eefd0fb9535ba560e3f50524be5;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_LONG_BLOB;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_test_DBAPISet_set_equality_membership;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_ImmutableSet_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_list_cad1a91ad161d4383ec794339cda90b4_list;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_plain_test_DBAPISet_set_equality;
extern PyObject *const_str_plain_NEWDECIMAL;
static PyObject *const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple;
extern PyObject *const_str_plain_YEAR;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_4afb6ac3c5c448817b7c4b2a044b9750;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_f9c2b5b2e3ce8d0c3b37f996f965ca15;
static PyObject *const_str_plain_test_DBAPISet_set_inequality_membership;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_BINARY;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain_TimeFromTicks;
extern PyObject *const_str_digest_e46e74d31c85f83e29b4c3ce2454e2c5;
static PyObject *const_str_plain_other;
extern PyObject *const_str_plain_TIMESTAMP;
static PyObject *const_str_plain_NameError;
extern PyObject *const_str_plain_FLOAT;
extern PyObject *const_str_plain_DateFromTicks;
extern PyObject *const_str_plain_BLOB;
static PyObject *const_tuple_str_plain_PY2_tuple;
static PyObject *const_str_digest_b74cea0d51578309955a2fee2c7236e8;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_LONG;
extern PyObject *const_str_plain_Time;
static PyObject *const_str_plain_ImportError;
static PyObject *const_str_plain_frozenset;
extern PyObject *const_str_plain_ENUM;
static PyObject *const_list_str_digest_631e719cd88db280f9d14ba287335e85_list;
static PyObject *const_str_plain_ImmutableSet;
static PyObject *const_tuple_6709017298096436edbb0ba91a1c0407_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_DATETIME;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_Connection;
extern PyObject *const_str_plain_MySQLdb;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain_TINY;
static PyObject *const_str_plain_Binary;
static PyObject *const_tuple_d85bd8cb14094c0d68953df95d702376_tuple;
extern PyObject *const_str_plain_FIELD_TYPE;
static PyObject *const_tuple_str_plain_FIELD_TYPE_tuple;
extern PyObject *const_str_plain_INT24;
static PyObject *const_str_digest_5e4109c2ac48a3307a3e7292f40c32b2;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_sets = UNSTREAM_STRING( &constant_bin[ 20853 ], 4, 1 );
    const_str_plain_apilevel = UNSTREAM_STRING( &constant_bin[ 22221 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_other_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_other = UNSTREAM_STRING( &constant_bin[ 3763 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    const_str_plain_paramstyle = UNSTREAM_STRING( &constant_bin[ 22229 ], 10, 1 );
    const_str_plain_NUMBER = UNSTREAM_STRING( &constant_bin[ 22239 ], 6, 1 );
    const_str_plain_test_DBAPISet_set_inequality = UNSTREAM_STRING( &constant_bin[ 22245 ], 28, 1 );
    const_str_plain_ROWID = UNSTREAM_STRING( &constant_bin[ 22273 ], 5, 1 );
    const_str_digest_fda88c3a37e390255aa0372a9c648cf3 = UNSTREAM_STRING( &constant_bin[ 22278 ], 52, 0 );
    const_str_plain_difference = UNSTREAM_STRING( &constant_bin[ 22330 ], 10, 1 );
    const_str_plain_DBAPISet = UNSTREAM_STRING( &constant_bin[ 22250 ], 8, 1 );
    const_str_digest_631e719cd88db280f9d14ba287335e85 = UNSTREAM_STRING( &constant_bin[ 22340 ], 67, 0 );
    const_str_digest_20306770f5ec770a3e4eb5aaea87ebd7 = UNSTREAM_STRING( &constant_bin[ 22407 ], 79, 0 );
    const_str_digest_85341a9af8c54a5d7f0ca5b2675c158b = UNSTREAM_STRING( &constant_bin[ 22486 ], 44, 0 );
    const_tuple_str_plain_Connection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Connection_tuple, 0, const_str_plain_Connection ); Py_INCREF( const_str_plain_Connection );
    const_str_plain_threadsafety = UNSTREAM_STRING( &constant_bin[ 22530 ], 12, 1 );
    const_tuple_str_plain__mysql_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__mysql_tuple, 0, const_str_plain__mysql ); Py_INCREF( const_str_plain__mysql );
    const_tuple_str_plain_x_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_8b499eefd0fb9535ba560e3f50524be5 = UNSTREAM_STRING( &constant_bin[ 22542 ], 16, 0 );
    const_str_plain_test_DBAPISet_set_equality_membership = UNSTREAM_STRING( &constant_bin[ 22558 ], 37, 1 );
    const_tuple_str_plain_ImmutableSet_tuple = PyTuple_New( 1 );
    const_str_plain_ImmutableSet = UNSTREAM_STRING( &constant_bin[ 22595 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ImmutableSet_tuple, 0, const_str_plain_ImmutableSet ); Py_INCREF( const_str_plain_ImmutableSet );
    const_list_cad1a91ad161d4383ec794339cda90b4_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 22607 ], 644 );
    const_str_plain_test_DBAPISet_set_equality = UNSTREAM_STRING( &constant_bin[ 22558 ], 26, 1 );
    const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple, 2, const_str_plain_Connection ); Py_INCREF( const_str_plain_Connection );
    const_str_digest_f9c2b5b2e3ce8d0c3b37f996f965ca15 = UNSTREAM_STRING( &constant_bin[ 23251 ], 351, 0 );
    const_str_plain_test_DBAPISet_set_inequality_membership = UNSTREAM_STRING( &constant_bin[ 23602 ], 39, 1 );
    const_str_plain___eq__ = UNSTREAM_STRING( &constant_bin[ 23641 ], 6, 1 );
    const_str_plain_NameError = UNSTREAM_STRING( &constant_bin[ 23647 ], 9, 1 );
    const_tuple_str_plain_PY2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PY2_tuple, 0, const_str_plain_PY2 ); Py_INCREF( const_str_plain_PY2 );
    const_str_digest_b74cea0d51578309955a2fee2c7236e8 = UNSTREAM_STRING( &constant_bin[ 23272 ], 3, 0 );
    const_str_plain_ImportError = UNSTREAM_STRING( &constant_bin[ 23656 ], 11, 1 );
    const_str_plain_frozenset = UNSTREAM_STRING( &constant_bin[ 23667 ], 9, 1 );
    const_list_str_digest_631e719cd88db280f9d14ba287335e85_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_631e719cd88db280f9d14ba287335e85_list, 0, const_str_digest_631e719cd88db280f9d14ba287335e85 ); Py_INCREF( const_str_digest_631e719cd88db280f9d14ba287335e85 );
    const_tuple_6709017298096436edbb0ba91a1c0407_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_6709017298096436edbb0ba91a1c0407_tuple, 0, const_str_plain___version__ ); Py_INCREF( const_str_plain___version__ );
    PyTuple_SET_ITEM( const_tuple_6709017298096436edbb0ba91a1c0407_tuple, 1, const_str_plain_version_info ); Py_INCREF( const_str_plain_version_info );
    PyTuple_SET_ITEM( const_tuple_6709017298096436edbb0ba91a1c0407_tuple, 2, const_str_plain___author__ ); Py_INCREF( const_str_plain___author__ );
    const_str_plain_Binary = UNSTREAM_STRING( &constant_bin[ 22628 ], 6, 1 );
    const_tuple_d85bd8cb14094c0d68953df95d702376_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 0, const_str_plain_Date ); Py_INCREF( const_str_plain_Date );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 1, const_str_plain_Time ); Py_INCREF( const_str_plain_Time );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 2, const_str_plain_Timestamp ); Py_INCREF( const_str_plain_Timestamp );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 3, const_str_plain_DateFromTicks ); Py_INCREF( const_str_plain_DateFromTicks );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 4, const_str_plain_TimeFromTicks ); Py_INCREF( const_str_plain_TimeFromTicks );
    PyTuple_SET_ITEM( const_tuple_d85bd8cb14094c0d68953df95d702376_tuple, 5, const_str_plain_TimestampFromTicks ); Py_INCREF( const_str_plain_TimestampFromTicks );
    const_tuple_str_plain_FIELD_TYPE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FIELD_TYPE_tuple, 0, const_str_plain_FIELD_TYPE ); Py_INCREF( const_str_plain_FIELD_TYPE );
    const_str_digest_5e4109c2ac48a3307a3e7292f40c32b2 = UNSTREAM_STRING( &constant_bin[ 23676 ], 100, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_baac58ea371d5b2e9d15644a8efd8f9a;
static PyCodeObject *codeobj_73c4a466ae0274432a1010b21f0f89e9;
static PyCodeObject *codeobj_25d95f32ba1daed4f7e756fcc8f7ab44;
static PyCodeObject *codeobj_e7a40587539b4073182020ad8874098d;
static PyCodeObject *codeobj_009cda707b06539adff6071e2818a4a5;
static PyCodeObject *codeobj_136b7ed131e3317730186cc5d80c5df9;
static PyCodeObject *codeobj_17dc5e447b8fb0b8ceefaeec25b108fe;
static PyCodeObject *codeobj_7af0e238bb040a9e9f0536a4b418381b;
static PyCodeObject *codeobj_a17f8a602753f73eff87bd5735a35fd5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_20306770f5ec770a3e4eb5aaea87ebd7;
    codeobj_baac58ea371d5b2e9d15644a8efd8f9a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8b499eefd0fb9535ba560e3f50524be5, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_73c4a466ae0274432a1010b21f0f89e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Binary, 75, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25d95f32ba1daed4f7e756fcc8f7ab44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Binary, 78, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e7a40587539b4073182020ad8874098d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Connect, 81, const_tuple_str_plain_args_str_plain_kwargs_str_plain_Connection_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_009cda707b06539adff6071e2818a4a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 43, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_136b7ed131e3317730186cc5d80c5df9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_test_DBAPISet_set_equality, 62, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17dc5e447b8fb0b8ceefaeec25b108fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_test_DBAPISet_set_equality_membership, 68, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7af0e238bb040a9e9f0536a4b418381b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_test_DBAPISet_set_inequality, 65, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a17f8a602753f73eff87bd5735a35fd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_test_DBAPISet_set_inequality_membership, 71, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_1___eq__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_2_test_DBAPISet_set_equality(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_3_test_DBAPISet_set_inequality(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_4_test_DBAPISet_set_equality_membership(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_6_Binary(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_7_Binary(  );


static PyObject *MAKE_FUNCTION_MySQLdb$$$function_8_Connect(  );


// The module function definitions.
static PyObject *impl_MySQLdb$$$function_1___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_009cda707b06539adff6071e2818a4a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_009cda707b06539adff6071e2818a4a5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_009cda707b06539adff6071e2818a4a5, codeobj_009cda707b06539adff6071e2818a4a5, module_MySQLdb, sizeof(void *)+sizeof(void *) );
    frame_009cda707b06539adff6071e2818a4a5 = cache_frame_009cda707b06539adff6071e2818a4a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_009cda707b06539adff6071e2818a4a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_009cda707b06539adff6071e2818a4a5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "isinstance" );
            exception_tb = NULL;

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_other );
        tmp_args_element_name_1 = par_other;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_009cda707b06539adff6071e2818a4a5->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_other );
            tmp_args_element_name_3 = par_other;
            frame_009cda707b06539adff6071e2818a4a5->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_difference, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_other );
        tmp_compexpr_left_1 = par_other;
        CHECK_OBJECT( par_self );
        tmp_compexpr_right_1 = par_self;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 1 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009cda707b06539adff6071e2818a4a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_009cda707b06539adff6071e2818a4a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009cda707b06539adff6071e2818a4a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_009cda707b06539adff6071e2818a4a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_009cda707b06539adff6071e2818a4a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_009cda707b06539adff6071e2818a4a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_009cda707b06539adff6071e2818a4a5,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_009cda707b06539adff6071e2818a4a5 == cache_frame_009cda707b06539adff6071e2818a4a5 )
    {
        Py_DECREF( frame_009cda707b06539adff6071e2818a4a5 );
    }
    cache_frame_009cda707b06539adff6071e2818a4a5 = NULL;

    assertFrameObject( frame_009cda707b06539adff6071e2818a4a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_1___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_1___eq__ );
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


static PyObject *impl_MySQLdb$$$function_2_test_DBAPISet_set_equality( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_136b7ed131e3317730186cc5d80c5df9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_136b7ed131e3317730186cc5d80c5df9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_136b7ed131e3317730186cc5d80c5df9, codeobj_136b7ed131e3317730186cc5d80c5df9, module_MySQLdb, 0 );
    frame_136b7ed131e3317730186cc5d80c5df9 = cache_frame_136b7ed131e3317730186cc5d80c5df9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_136b7ed131e3317730186cc5d80c5df9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_136b7ed131e3317730186cc5d80c5df9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRING" );
            exception_tb = NULL;

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRING );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRING" );
            exception_tb = NULL;

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;

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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 63;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_136b7ed131e3317730186cc5d80c5df9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_136b7ed131e3317730186cc5d80c5df9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_136b7ed131e3317730186cc5d80c5df9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_136b7ed131e3317730186cc5d80c5df9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_136b7ed131e3317730186cc5d80c5df9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_136b7ed131e3317730186cc5d80c5df9,
        type_description_1
    );


    // Release cached frame.
    if ( frame_136b7ed131e3317730186cc5d80c5df9 == cache_frame_136b7ed131e3317730186cc5d80c5df9 )
    {
        Py_DECREF( frame_136b7ed131e3317730186cc5d80c5df9 );
    }
    cache_frame_136b7ed131e3317730186cc5d80c5df9 = NULL;

    assertFrameObject( frame_136b7ed131e3317730186cc5d80c5df9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_2_test_DBAPISet_set_equality );
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


static PyObject *impl_MySQLdb$$$function_3_test_DBAPISet_set_inequality( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7af0e238bb040a9e9f0536a4b418381b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7af0e238bb040a9e9f0536a4b418381b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_7af0e238bb040a9e9f0536a4b418381b, codeobj_7af0e238bb040a9e9f0536a4b418381b, module_MySQLdb, 0 );
    frame_7af0e238bb040a9e9f0536a4b418381b = cache_frame_7af0e238bb040a9e9f0536a4b418381b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7af0e238bb040a9e9f0536a4b418381b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7af0e238bb040a9e9f0536a4b418381b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRING" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_NUMBER );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NUMBER );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "NUMBER" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 66;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7af0e238bb040a9e9f0536a4b418381b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7af0e238bb040a9e9f0536a4b418381b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7af0e238bb040a9e9f0536a4b418381b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7af0e238bb040a9e9f0536a4b418381b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7af0e238bb040a9e9f0536a4b418381b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7af0e238bb040a9e9f0536a4b418381b,
        type_description_1
    );


    // Release cached frame.
    if ( frame_7af0e238bb040a9e9f0536a4b418381b == cache_frame_7af0e238bb040a9e9f0536a4b418381b )
    {
        Py_DECREF( frame_7af0e238bb040a9e9f0536a4b418381b );
    }
    cache_frame_7af0e238bb040a9e9f0536a4b418381b = NULL;

    assertFrameObject( frame_7af0e238bb040a9e9f0536a4b418381b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_3_test_DBAPISet_set_inequality );
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


static PyObject *impl_MySQLdb$$$function_4_test_DBAPISet_set_equality_membership( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_17dc5e447b8fb0b8ceefaeec25b108fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_17dc5e447b8fb0b8ceefaeec25b108fe = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_17dc5e447b8fb0b8ceefaeec25b108fe, codeobj_17dc5e447b8fb0b8ceefaeec25b108fe, module_MySQLdb, 0 );
    frame_17dc5e447b8fb0b8ceefaeec25b108fe = cache_frame_17dc5e447b8fb0b8ceefaeec25b108fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17dc5e447b8fb0b8ceefaeec25b108fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17dc5e447b8fb0b8ceefaeec25b108fe ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_VAR_STRING );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRING );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRING" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 69;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17dc5e447b8fb0b8ceefaeec25b108fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17dc5e447b8fb0b8ceefaeec25b108fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17dc5e447b8fb0b8ceefaeec25b108fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17dc5e447b8fb0b8ceefaeec25b108fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17dc5e447b8fb0b8ceefaeec25b108fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17dc5e447b8fb0b8ceefaeec25b108fe,
        type_description_1
    );


    // Release cached frame.
    if ( frame_17dc5e447b8fb0b8ceefaeec25b108fe == cache_frame_17dc5e447b8fb0b8ceefaeec25b108fe )
    {
        Py_DECREF( frame_17dc5e447b8fb0b8ceefaeec25b108fe );
    }
    cache_frame_17dc5e447b8fb0b8ceefaeec25b108fe = NULL;

    assertFrameObject( frame_17dc5e447b8fb0b8ceefaeec25b108fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_4_test_DBAPISet_set_equality_membership );
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


static PyObject *impl_MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a17f8a602753f73eff87bd5735a35fd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a17f8a602753f73eff87bd5735a35fd5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_a17f8a602753f73eff87bd5735a35fd5, codeobj_a17f8a602753f73eff87bd5735a35fd5, module_MySQLdb, 0 );
    frame_a17f8a602753f73eff87bd5735a35fd5 = cache_frame_a17f8a602753f73eff87bd5735a35fd5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a17f8a602753f73eff87bd5735a35fd5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a17f8a602753f73eff87bd5735a35fd5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DATE );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRING );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRING" );
            exception_tb = NULL;

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 72;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a17f8a602753f73eff87bd5735a35fd5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a17f8a602753f73eff87bd5735a35fd5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a17f8a602753f73eff87bd5735a35fd5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a17f8a602753f73eff87bd5735a35fd5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a17f8a602753f73eff87bd5735a35fd5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a17f8a602753f73eff87bd5735a35fd5,
        type_description_1
    );


    // Release cached frame.
    if ( frame_a17f8a602753f73eff87bd5735a35fd5 == cache_frame_a17f8a602753f73eff87bd5735a35fd5 )
    {
        Py_DECREF( frame_a17f8a602753f73eff87bd5735a35fd5 );
    }
    cache_frame_a17f8a602753f73eff87bd5735a35fd5 = NULL;

    assertFrameObject( frame_a17f8a602753f73eff87bd5735a35fd5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership );
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


static PyObject *impl_MySQLdb$$$function_6_Binary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_73c4a466ae0274432a1010b21f0f89e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73c4a466ae0274432a1010b21f0f89e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_73c4a466ae0274432a1010b21f0f89e9, codeobj_73c4a466ae0274432a1010b21f0f89e9, module_MySQLdb, sizeof(void *) );
    frame_73c4a466ae0274432a1010b21f0f89e9 = cache_frame_73c4a466ae0274432a1010b21f0f89e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_73c4a466ae0274432a1010b21f0f89e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_73c4a466ae0274432a1010b21f0f89e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_bytearray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytearray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytearray" );
            exception_tb = NULL;

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_73c4a466ae0274432a1010b21f0f89e9->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73c4a466ae0274432a1010b21f0f89e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_73c4a466ae0274432a1010b21f0f89e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73c4a466ae0274432a1010b21f0f89e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_73c4a466ae0274432a1010b21f0f89e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_73c4a466ae0274432a1010b21f0f89e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_73c4a466ae0274432a1010b21f0f89e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73c4a466ae0274432a1010b21f0f89e9,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_73c4a466ae0274432a1010b21f0f89e9 == cache_frame_73c4a466ae0274432a1010b21f0f89e9 )
    {
        Py_DECREF( frame_73c4a466ae0274432a1010b21f0f89e9 );
    }
    cache_frame_73c4a466ae0274432a1010b21f0f89e9 = NULL;

    assertFrameObject( frame_73c4a466ae0274432a1010b21f0f89e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_6_Binary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_6_Binary );
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


static PyObject *impl_MySQLdb$$$function_7_Binary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_25d95f32ba1daed4f7e756fcc8f7ab44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25d95f32ba1daed4f7e756fcc8f7ab44 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25d95f32ba1daed4f7e756fcc8f7ab44, codeobj_25d95f32ba1daed4f7e756fcc8f7ab44, module_MySQLdb, sizeof(void *) );
    frame_25d95f32ba1daed4f7e756fcc8f7ab44 = cache_frame_25d95f32ba1daed4f7e756fcc8f7ab44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25d95f32ba1daed4f7e756fcc8f7ab44 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
            exception_tb = NULL;

            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_25d95f32ba1daed4f7e756fcc8f7ab44->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25d95f32ba1daed4f7e756fcc8f7ab44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25d95f32ba1daed4f7e756fcc8f7ab44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25d95f32ba1daed4f7e756fcc8f7ab44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25d95f32ba1daed4f7e756fcc8f7ab44,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_25d95f32ba1daed4f7e756fcc8f7ab44 == cache_frame_25d95f32ba1daed4f7e756fcc8f7ab44 )
    {
        Py_DECREF( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );
    }
    cache_frame_25d95f32ba1daed4f7e756fcc8f7ab44 = NULL;

    assertFrameObject( frame_25d95f32ba1daed4f7e756fcc8f7ab44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_7_Binary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_7_Binary );
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


static PyObject *impl_MySQLdb$$$function_8_Connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_Connection = NULL;
    struct Nuitka_FrameObject *frame_e7a40587539b4073182020ad8874098d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e7a40587539b4073182020ad8874098d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e7a40587539b4073182020ad8874098d, codeobj_e7a40587539b4073182020ad8874098d, module_MySQLdb, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e7a40587539b4073182020ad8874098d = cache_frame_e7a40587539b4073182020ad8874098d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e7a40587539b4073182020ad8874098d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e7a40587539b4073182020ad8874098d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_e16b0126d837ce7ad3b9f1fbd3704965;
        tmp_globals_name_1 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Connection_tuple;
        frame_e7a40587539b4073182020ad8874098d->m_frame.f_lineno = 83;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Connection );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_Connection == NULL );
        var_Connection = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( var_Connection );
        tmp_dircall_arg1_1 = var_Connection;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7a40587539b4073182020ad8874098d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7a40587539b4073182020ad8874098d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7a40587539b4073182020ad8874098d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e7a40587539b4073182020ad8874098d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e7a40587539b4073182020ad8874098d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e7a40587539b4073182020ad8874098d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e7a40587539b4073182020ad8874098d,
        type_description_1,
        par_args,
        par_kwargs,
        var_Connection
    );


    // Release cached frame.
    if ( frame_e7a40587539b4073182020ad8874098d == cache_frame_e7a40587539b4073182020ad8874098d )
    {
        Py_DECREF( frame_e7a40587539b4073182020ad8874098d );
    }
    cache_frame_e7a40587539b4073182020ad8874098d = NULL;

    assertFrameObject( frame_e7a40587539b4073182020ad8874098d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_8_Connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Connection );
    Py_DECREF( var_Connection );
    var_Connection = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( var_Connection );
    var_Connection = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$$$function_8_Connect );
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



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_1___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_1___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_009cda707b06539adff6071e2818a4a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_2_test_DBAPISet_set_equality(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_2_test_DBAPISet_set_equality,
        const_str_plain_test_DBAPISet_set_equality,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_136b7ed131e3317730186cc5d80c5df9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_3_test_DBAPISet_set_inequality(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_3_test_DBAPISet_set_inequality,
        const_str_plain_test_DBAPISet_set_inequality,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7af0e238bb040a9e9f0536a4b418381b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_4_test_DBAPISet_set_equality_membership(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_4_test_DBAPISet_set_equality_membership,
        const_str_plain_test_DBAPISet_set_equality_membership,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_17dc5e447b8fb0b8ceefaeec25b108fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership,
        const_str_plain_test_DBAPISet_set_inequality_membership,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a17f8a602753f73eff87bd5735a35fd5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_6_Binary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_6_Binary,
        const_str_plain_Binary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73c4a466ae0274432a1010b21f0f89e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_7_Binary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_7_Binary,
        const_str_plain_Binary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25d95f32ba1daed4f7e756fcc8f7ab44,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$$$function_8_Connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$$$function_8_Connect,
        const_str_plain_Connect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e7a40587539b4073182020ad8874098d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb,
        const_str_digest_85341a9af8c54a5d7f0ca5b2675c158b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_MySQLdb =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb",
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

MOD_INIT_DECL( MySQLdb )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb );
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
    puts("MySQLdb: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb = Py_InitModule4(
        "MySQLdb",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb = PyModule_Create( &mdef_MySQLdb );
#endif

    moduledict_MySQLdb = MODULE_DICT( module_MySQLdb );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_MySQLdb, module_MySQLdb );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_baac58ea371d5b2e9d15644a8efd8f9a;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_MySQLdb_39 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_f9c2b5b2e3ce8d0c3b37f996f965ca15;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_20306770f5ec770a3e4eb5aaea87ebd7;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_631e719cd88db280f9d14ba287335e85_list );
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_baac58ea371d5b2e9d15644a8efd8f9a = MAKE_MODULE_FRAME( codeobj_baac58ea371d5b2e9d15644a8efd8f9a, module_MySQLdb );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_baac58ea371d5b2e9d15644a8efd8f9a );
    assert( Py_REFCNT( frame_baac58ea371d5b2e9d15644a8efd8f9a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_4afb6ac3c5c448817b7c4b2a044b9750;
        tmp_globals_name_1 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_6709017298096436edbb0ba91a1c0407_tuple;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 16;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

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
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___version__ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_version_info );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain___author__ );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_7 );
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
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_1;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain__mysql_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 18;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__mysql );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain__mysql, tmp_assign_source_8 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_version_info );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "version_info" );
            exception_tb = NULL;

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain__mysql );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_ImportError );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ImportError" );
                exception_tb = NULL;

                exception_lineno = 21;

                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            tmp_left_name_1 = const_str_digest_fda88c3a37e390255aa0372a9c648cf3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_version_info );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "version_info" );
                exception_tb = NULL;

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain__mysql );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_right_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_mysql" );
                exception_tb = NULL;

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_5;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 21;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 21;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_threadsafety, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_b74cea0d51578309955a2fee2c7236e8;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_apilevel, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_plain_format;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_paramstyle, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_2;
        tmp_name_name_3 = const_str_plain__mysql;
        tmp_globals_name_3 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_3 = (PyObject *)moduledict_MySQLdb;
        tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 28;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_2 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_MySQLdb, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_digest_6e1b9039a1198642c91d743e9550d006;
        tmp_globals_name_4 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_PY2_tuple;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 29;
        tmp_import_name_from_5 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PY2 );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_digest_05cd2a7a408dc6619e97d739b1ced7db;
        tmp_globals_name_5 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_FIELD_TYPE_tuple;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 30;
        tmp_import_name_from_6 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_FIELD_TYPE );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_digest_e46e74d31c85f83e29b4c3ce2454e2c5;
        tmp_globals_name_6 = (PyObject *)moduledict_MySQLdb;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_d85bd8cb14094c0d68953df95d702376_tuple;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 31;
        tmp_assign_source_14 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Date );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Date, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Time );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Time, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Timestamp );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Timestamp, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_DateFromTicks );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DateFromTicks, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_TimeFromTicks );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_TimeFromTicks, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_TimestampFromTicks );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_TimestampFromTicks, tmp_assign_source_20 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Tried code:
    {
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_frozenset );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_frozenset );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "frozenset" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_3;
        }

    }
    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_baac58ea371d5b2e9d15644a8efd8f9a );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_baac58ea371d5b2e9d15644a8efd8f9a, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_baac58ea371d5b2e9d15644a8efd8f9a, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_7;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_NameError );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameError );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "NameError" );
            exception_tb = NULL;

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_7;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_import_name_from_13;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            tmp_name_name_7 = const_str_plain_sets;
            tmp_globals_name_7 = (PyObject *)moduledict_MySQLdb;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = const_tuple_str_plain_ImmutableSet_tuple;
            frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 37;
            tmp_import_name_from_13 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
            if ( tmp_import_name_from_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_ImmutableSet );
            Py_DECREF( tmp_import_name_from_13 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_frozenset, tmp_assign_source_21 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 34;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame) frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_frozenset );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_frozenset );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "frozenset" );
            exception_tb = NULL;

            exception_lineno = 39;

            goto try_except_handler_4;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        tmp_assign_source_22 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_MySQLdb_39 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_plain_MySQLdb;
        tmp_res = PyDict_SetItem( locals_MySQLdb_39, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_5e4109c2ac48a3307a3e7292f40c32b2;
        tmp_res = PyDict_SetItem( locals_MySQLdb_39, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$$$function_1___eq__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb_39, const_str_plain___eq__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_23 = locals_MySQLdb_39;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_MySQLdb_39 );
        locals_MySQLdb_39 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_25 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;

                goto try_except_handler_4;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_25;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_3 = tmp_select_metaclass_1__base;
            tmp_assign_source_24 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_4 );
            Py_XDECREF( exception_keeper_value_4 );
            Py_XDECREF( exception_keeper_tb_4 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_24 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_24 == NULL) );
            goto try_return_handler_6;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_2 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_2 = const_str_plain_DBAPISet;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_3 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_4 = tmp_class_creation_1__class_dict;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_26;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_27 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet, tmp_assign_source_27 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ENUM );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_args_element_name_5, 0, tmp_list_element_1 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_11;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_STRING );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_5, 1, tmp_list_element_1 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_12;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_VAR_STRING );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_5, 2, tmp_list_element_1 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_STRING, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_list_element_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_14;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_BLOB );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = PyList_New( 4 );
        PyList_SET_ITEM( tmp_args_element_name_6, 0, tmp_list_element_2 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_15;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_LONG_BLOB );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 1, tmp_list_element_2 );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_16;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_MEDIUM_BLOB );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 2, tmp_list_element_2 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_17;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_TINY_BLOB );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_6, 3, tmp_list_element_2 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_BINARY, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_19;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_DECIMAL );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = PyList_New( 9 );
        PyList_SET_ITEM( tmp_args_element_name_7, 0, tmp_list_element_3 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_20;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_DOUBLE );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 1, tmp_list_element_3 );
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_21;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_FLOAT );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 2, tmp_list_element_3 );
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_22;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_INT24 );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 3, tmp_list_element_3 );
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_23;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_LONG );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 4, tmp_list_element_3 );
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_24;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_LONGLONG );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 5, tmp_list_element_3 );
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_25;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_TINY );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 6, tmp_list_element_3 );
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_26;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_YEAR );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 7, tmp_list_element_3 );
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_27 == NULL )
        {
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_27;
        tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_NEWDECIMAL );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_7, 8, tmp_list_element_3 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_NUMBER, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_list_element_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_29;
        tmp_list_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_DATE );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_args_element_name_8, 0, tmp_list_element_4 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DATE, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_list_element_5;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_30;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_31;
        tmp_list_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_TIME );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_args_element_name_9, 0, tmp_list_element_5 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_TIME, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_list_element_6;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_32;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_33;
        tmp_list_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_TIMESTAMP );
        if ( tmp_list_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_10, 0, tmp_list_element_6 );
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELD_TYPE );
        }

        if ( tmp_mvar_value_34 == NULL )
        {
            Py_DECREF( tmp_args_element_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FIELD_TYPE" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_34;
        tmp_list_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_DATETIME );
        if ( tmp_list_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_10, 1, tmp_list_element_6 );
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_TIMESTAMP, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_TIMESTAMP );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TIMESTAMP );
        }

        CHECK_OBJECT( tmp_mvar_value_35 );
        tmp_assign_source_34 = tmp_mvar_value_35;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DATETIME, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_DBAPISet );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBAPISet );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DBAPISet" );
            exception_tb = NULL;

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_36;
        frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame.f_lineno = 60;
        tmp_assign_source_35 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_ROWID, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_MySQLdb$$$function_2_test_DBAPISet_set_equality(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_test_DBAPISet_set_equality, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_MySQLdb$$$function_3_test_DBAPISet_set_inequality(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_test_DBAPISet_set_inequality, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_MySQLdb$$$function_4_test_DBAPISet_set_equality_membership(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_test_DBAPISet_set_equality_membership, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_MySQLdb$$$function_5_test_DBAPISet_set_inequality_membership(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_test_DBAPISet_set_inequality_membership, tmp_assign_source_39 );
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_mvar_value_37;
        int tmp_truth_name_1;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_PY2 );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY2 );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PY2" );
            exception_tb = NULL;

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_37 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = MAKE_FUNCTION_MySQLdb$$$function_6_Binary(  );



            UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Binary, tmp_assign_source_40 );
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_FUNCTION_MySQLdb$$$function_7_Binary(  );



            UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Binary, tmp_assign_source_41 );
        }
        branch_end_3:;
    }

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_baac58ea371d5b2e9d15644a8efd8f9a );
#endif
    popFrameStack();

    assertFrameObject( frame_baac58ea371d5b2e9d15644a8efd8f9a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_baac58ea371d5b2e9d15644a8efd8f9a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_baac58ea371d5b2e9d15644a8efd8f9a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_baac58ea371d5b2e9d15644a8efd8f9a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_baac58ea371d5b2e9d15644a8efd8f9a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_MySQLdb$$$function_8_Connect(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Connect, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Connect );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Connect );
        }

        CHECK_OBJECT( tmp_mvar_value_38 );
        tmp_assign_source_43 = tmp_mvar_value_38;
        assert( tmp_assign_unpack_1__assign_source == NULL );
        Py_INCREF( tmp_assign_source_43 );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_44 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_connect, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_45 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain_Connection, tmp_assign_source_45 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = LIST_COPY( const_list_cad1a91ad161d4383ec794339cda90b4_list );
        UPDATE_STRING_DICT1( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_46 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_MySQLdb );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
