/* Generated code for Python module 'Inc.Util.Str'
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

/* The "_module_Inc$Util$Str" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Inc$Util$Str;
PyDictObject *moduledict_Inc$Util$Str;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Repl;
extern PyObject *const_str_plain_aData;
static PyObject *const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple;
extern PyObject *const_str_chr_44;
static PyObject *const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_str_plain_aStr_str_plain_Result_tuple;
static PyObject *const_str_plain_iteritems;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_aIdx;
extern PyObject *const_list_str_plain_str_str_plain_unicode_list;
static PyObject *const_str_plain_GetPart;
static PyObject *const_str_plain_Find;
extern PyObject *const_str_plain_aFunc;
static PyObject *const_str_plain_ReplaceIdx;
static PyObject *const_list_str_plain_true_str_plain_false_list;
extern PyObject *const_str_digest_ade26fea59a84e8b725866efbaa8d71b;
static PyObject *const_str_plain_aReplace;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_aDelim;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_isdigit;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Result;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_ConvertTo;
static PyObject *const_str_digest_c59df5d0449b8a72b0f2444bce76d1e7;
static PyObject *const_str_plain_aFindRepl;
static PyObject *const_str_plain_MultiRepl;
static PyObject *const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple;
static PyObject *const_str_plain_false;
static PyObject *const_tuple_str_plain_aData_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_chr_44_str_dot_tuple;
static PyObject *const_str_plain_ToFloat;
extern PyObject *const_str_plain_Item;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_d7acc30ae8359c8792ec65ac8b9c1667;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_aStr;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain_ActionDelim;
extern PyObject *const_str_plain_Items;
static PyObject *const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple;
static PyObject *const_str_digest_4d94cef2e3cb9b4f1ce98a9ab2f21503;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_true;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple, 0, const_str_plain_aStr ); Py_INCREF( const_str_plain_aStr );
    const_str_plain_aFindRepl = UNSTREAM_STRING( &constant_bin[ 21784 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple, 1, const_str_plain_aFindRepl ); Py_INCREF( const_str_plain_aFindRepl );
    PyTuple_SET_ITEM( const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple, 2, const_str_plain_Repl ); Py_INCREF( const_str_plain_Repl );
    const_str_plain_Find = UNSTREAM_STRING( &constant_bin[ 10966 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple, 3, const_str_plain_Find ); Py_INCREF( const_str_plain_Find );
    const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple, 0, const_str_plain_aStr ); Py_INCREF( const_str_plain_aStr );
    PyTuple_SET_ITEM( const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple, 1, const_str_plain_aIdx ); Py_INCREF( const_str_plain_aIdx );
    const_str_plain_aReplace = UNSTREAM_STRING( &constant_bin[ 21793 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple, 2, const_str_plain_aReplace ); Py_INCREF( const_str_plain_aReplace );
    const_tuple_str_plain_aStr_str_plain_Result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aStr_str_plain_Result_tuple, 0, const_str_plain_aStr ); Py_INCREF( const_str_plain_aStr );
    PyTuple_SET_ITEM( const_tuple_str_plain_aStr_str_plain_Result_tuple, 1, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_plain_iteritems = UNSTREAM_STRING( &constant_bin[ 21801 ], 9, 1 );
    const_str_plain_GetPart = UNSTREAM_STRING( &constant_bin[ 21810 ], 7, 1 );
    const_str_plain_ReplaceIdx = UNSTREAM_STRING( &constant_bin[ 21817 ], 10, 1 );
    const_list_str_plain_true_str_plain_false_list = PyList_New( 2 );
    const_str_plain_true = UNSTREAM_STRING( &constant_bin[ 21827 ], 4, 1 );
    PyList_SET_ITEM( const_list_str_plain_true_str_plain_false_list, 0, const_str_plain_true ); Py_INCREF( const_str_plain_true );
    const_str_plain_false = UNSTREAM_STRING( &constant_bin[ 17433 ], 5, 1 );
    PyList_SET_ITEM( const_list_str_plain_true_str_plain_false_list, 1, const_str_plain_false ); Py_INCREF( const_str_plain_false );
    const_str_plain_aDelim = UNSTREAM_STRING( &constant_bin[ 21831 ], 6, 1 );
    const_str_digest_c59df5d0449b8a72b0f2444bce76d1e7 = UNSTREAM_STRING( &constant_bin[ 21837 ], 12, 0 );
    const_str_plain_MultiRepl = UNSTREAM_STRING( &constant_bin[ 21849 ], 9, 1 );
    const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple, 0, const_str_plain_aStr ); Py_INCREF( const_str_plain_aStr );
    PyTuple_SET_ITEM( const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple, 1, const_str_plain_aIdx ); Py_INCREF( const_str_plain_aIdx );
    PyTuple_SET_ITEM( const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple, 2, const_str_plain_aDelim ); Py_INCREF( const_str_plain_aDelim );
    PyTuple_SET_ITEM( const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple, 3, const_str_plain_Items ); Py_INCREF( const_str_plain_Items );
    const_tuple_str_plain_aData_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aData_tuple, 0, const_str_plain_aData ); Py_INCREF( const_str_plain_aData );
    const_tuple_str_chr_44_str_dot_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_44_str_dot_tuple, 0, const_str_chr_44 ); Py_INCREF( const_str_chr_44 );
    PyTuple_SET_ITEM( const_tuple_str_chr_44_str_dot_tuple, 1, const_str_dot ); Py_INCREF( const_str_dot );
    const_str_plain_ToFloat = UNSTREAM_STRING( &constant_bin[ 21858 ], 7, 1 );
    const_str_digest_d7acc30ae8359c8792ec65ac8b9c1667 = UNSTREAM_STRING( &constant_bin[ 21865 ], 21, 0 );
    const_str_plain_ActionDelim = UNSTREAM_STRING( &constant_bin[ 21886 ], 11, 1 );
    const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 1, const_str_plain_aStr ); Py_INCREF( const_str_plain_aStr );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 2, const_str_plain_aFunc ); Py_INCREF( const_str_plain_aFunc );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 3, const_str_plain_aDelim ); Py_INCREF( const_str_plain_aDelim );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 4, const_str_plain_Items ); Py_INCREF( const_str_plain_Items );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 5, const_str_plain_Item ); Py_INCREF( const_str_plain_Item );
    PyTuple_SET_ITEM( const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 6, const_str_plain_Result ); Py_INCREF( const_str_plain_Result );
    const_str_digest_4d94cef2e3cb9b4f1ce98a9ab2f21503 = UNSTREAM_STRING( &constant_bin[ 21897 ], 56, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Inc$Util$Str( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1fcea7fa7d09f1f00202ba79daae7ec7;
static PyCodeObject *codeobj_7bbc4ebc758e9015f91e1070ed982446;
static PyCodeObject *codeobj_33179a04c7cab50e31332362c6b7ff74;
static PyCodeObject *codeobj_dec0c3a82265b3c20b9c65e53f9723e2;
static PyCodeObject *codeobj_8c40fea725a658aac315222cadf4fa1d;
static PyCodeObject *codeobj_9758ea2db334c1f74cb67442797d3a28;
static PyCodeObject *codeobj_b2650662b2a31accb782b610dcf59f06;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4d94cef2e3cb9b4f1ce98a9ab2f21503;
    codeobj_1fcea7fa7d09f1f00202ba79daae7ec7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d7acc30ae8359c8792ec65ac8b9c1667, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_7bbc4ebc758e9015f91e1070ed982446 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ActionDelim, 11, const_tuple_039f4126a2d4c6b98f79f3f75c5d7428_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33179a04c7cab50e31332362c6b7ff74 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ConvertTo, 20, const_tuple_str_plain_aData_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dec0c3a82265b3c20b9c65e53f9723e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GetPart, 31, const_tuple_c191293c058dc680f6270d22c1e4fbb1_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c40fea725a658aac315222cadf4fa1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MultiRepl, 47, const_tuple_85fa87212f0f232db7cac821a612eeaf_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9758ea2db334c1f74cb67442797d3a28 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ReplaceIdx, 53, const_tuple_str_plain_aStr_str_plain_aIdx_str_plain_aReplace_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b2650662b2a31accb782b610dcf59f06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ToFloat, 38, const_tuple_str_plain_aStr_str_plain_Result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_1_ActionDelim( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_2_ConvertTo(  );


static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_3_GetPart( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_4_ToFloat(  );


static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_5_MultiRepl(  );


static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_6_ReplaceIdx(  );


// The module function definitions.
static PyObject *impl_Inc$Util$Str$$$function_1_ActionDelim( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_aStr = python_pars[ 1 ];
    PyObject *par_aFunc = python_pars[ 2 ];
    PyObject *par_aDelim = python_pars[ 3 ];
    PyObject *var_Items = NULL;
    PyObject *var_Item = NULL;
    PyObject *var_Result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7bbc4ebc758e9015f91e1070ed982446;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7bbc4ebc758e9015f91e1070ed982446 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_empty;
        assert( var_Result == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_Result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bbc4ebc758e9015f91e1070ed982446, codeobj_7bbc4ebc758e9015f91e1070ed982446, module_Inc$Util$Str, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bbc4ebc758e9015f91e1070ed982446 = cache_frame_7bbc4ebc758e9015f91e1070ed982446;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bbc4ebc758e9015f91e1070ed982446 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bbc4ebc758e9015f91e1070ed982446 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_aStr );
        tmp_called_instance_1 = par_aStr;
        CHECK_OBJECT( par_aDelim );
        tmp_args_element_name_1 = par_aDelim;
        frame_7bbc4ebc758e9015f91e1070ed982446->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Items == NULL );
        var_Items = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_Items );
        tmp_iter_arg_1 = var_Items;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 14;
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
            PyObject *old = var_Item;
            var_Item = tmp_assign_source_5;
            Py_INCREF( var_Item );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_Item );
        tmp_called_instance_2 = var_Item;
        frame_7bbc4ebc758e9015f91e1070ed982446->m_frame.f_lineno = 15;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_Item;
            assert( old != NULL );
            var_Item = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_Item );
        tmp_compexpr_left_1 = var_Item;
        tmp_compexpr_right_1 = const_str_empty;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            if ( var_Result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "Result" );
                exception_tb = NULL;

                exception_lineno = 17;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = var_Result;
            CHECK_OBJECT( par_aFunc );
            tmp_called_name_1 = par_aFunc;
            CHECK_OBJECT( var_Item );
            tmp_args_element_name_2 = var_Item;
            frame_7bbc4ebc758e9015f91e1070ed982446->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = tmp_left_name_1;
            var_Result = tmp_assign_source_7;

        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooooooo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_Result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "Result" );
        exception_tb = NULL;

        exception_lineno = 18;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_Result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bbc4ebc758e9015f91e1070ed982446 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bbc4ebc758e9015f91e1070ed982446 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bbc4ebc758e9015f91e1070ed982446 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bbc4ebc758e9015f91e1070ed982446, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bbc4ebc758e9015f91e1070ed982446->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bbc4ebc758e9015f91e1070ed982446, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bbc4ebc758e9015f91e1070ed982446,
        type_description_1,
        par_self,
        par_aStr,
        par_aFunc,
        par_aDelim,
        var_Items,
        var_Item,
        var_Result
    );


    // Release cached frame.
    if ( frame_7bbc4ebc758e9015f91e1070ed982446 == cache_frame_7bbc4ebc758e9015f91e1070ed982446 )
    {
        Py_DECREF( frame_7bbc4ebc758e9015f91e1070ed982446 );
    }
    cache_frame_7bbc4ebc758e9015f91e1070ed982446 = NULL;

    assertFrameObject( frame_7bbc4ebc758e9015f91e1070ed982446 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_1_ActionDelim );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aFunc );
    Py_DECREF( par_aFunc );
    par_aFunc = NULL;

    CHECK_OBJECT( (PyObject *)var_Items );
    Py_DECREF( var_Items );
    var_Items = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Item );
    var_Item = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aDelim );
    Py_DECREF( par_aDelim );
    par_aDelim = NULL;

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

    CHECK_OBJECT( (PyObject *)par_aFunc );
    Py_DECREF( par_aFunc );
    par_aFunc = NULL;

    Py_XDECREF( var_Items );
    var_Items = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_Item );
    var_Item = NULL;

    Py_XDECREF( var_Result );
    var_Result = NULL;

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aDelim );
    Py_DECREF( par_aDelim );
    par_aDelim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_1_ActionDelim );
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


static PyObject *impl_Inc$Util$Str$$$function_2_ConvertTo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aData = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_33179a04c7cab50e31332362c6b7ff74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_33179a04c7cab50e31332362c6b7ff74 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33179a04c7cab50e31332362c6b7ff74, codeobj_33179a04c7cab50e31332362c6b7ff74, module_Inc$Util$Str, sizeof(void *) );
    frame_33179a04c7cab50e31332362c6b7ff74 = cache_frame_33179a04c7cab50e31332362c6b7ff74;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33179a04c7cab50e31332362c6b7ff74 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33179a04c7cab50e31332362c6b7ff74 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_aData );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_aData );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_aData );
        tmp_type_arg_1 = par_aData;
        tmp_source_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_source_name_1 == NULL) );
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_str_str_plain_unicode_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_aData );
            tmp_called_instance_1 = par_aData;
            frame_33179a04c7cab50e31332362c6b7ff74->m_frame.f_lineno = 22;
            tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = LIST_COPY( const_list_str_plain_true_str_plain_false_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_value_name_1;
                CHECK_OBJECT( par_aData );
                tmp_value_name_1 = par_aData;
                tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
                {
                    PyObject *old = par_aData;
                    assert( old != NULL );
                    par_aData = tmp_assign_source_1;
                    Py_INCREF( par_aData );
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_1;
                int tmp_truth_name_2;
                CHECK_OBJECT( par_aData );
                tmp_called_instance_2 = par_aData;
                frame_33179a04c7cab50e31332362c6b7ff74->m_frame.f_lineno = 24;
                tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isdigit );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 24;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_1 );

                    exception_lineno = 24;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_1 );
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_int_arg_1;
                    CHECK_OBJECT( par_aData );
                    tmp_int_arg_1 = par_aData;
                    tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 25;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_aData;
                        assert( old != NULL );
                        par_aData = tmp_assign_source_2;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_mvar_value_1;
                    PyObject *tmp_args_element_name_1;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ToFloat );

                    if (unlikely( tmp_mvar_value_1 == NULL ))
                    {
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ToFloat );
                    }

                    if ( tmp_mvar_value_1 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ToFloat" );
                        exception_tb = NULL;

                        exception_lineno = 26;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_1 = tmp_mvar_value_1;
                    CHECK_OBJECT( par_aData );
                    tmp_args_element_name_1 = par_aData;
                    frame_33179a04c7cab50e31332362c6b7ff74->m_frame.f_lineno = 26;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    if ( tmp_compexpr_left_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 26;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_3 = Py_None;
                    tmp_condition_result_4 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_compexpr_left_3 );
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
                        PyObject *tmp_assign_source_3;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_mvar_value_2;
                        PyObject *tmp_args_element_name_2;
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ToFloat );

                        if (unlikely( tmp_mvar_value_2 == NULL ))
                        {
                            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ToFloat );
                        }

                        if ( tmp_mvar_value_2 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ToFloat" );
                            exception_tb = NULL;

                            exception_lineno = 27;
                            type_description_1 = "o";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_2 = tmp_mvar_value_2;
                        CHECK_OBJECT( par_aData );
                        tmp_args_element_name_2 = par_aData;
                        frame_33179a04c7cab50e31332362c6b7ff74->m_frame.f_lineno = 27;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_2 };
                            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                        }

                        if ( tmp_assign_source_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 27;
                            type_description_1 = "o";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = par_aData;
                            assert( old != NULL );
                            par_aData = tmp_assign_source_3;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    if ( par_aData == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "aData" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_aData;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33179a04c7cab50e31332362c6b7ff74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_33179a04c7cab50e31332362c6b7ff74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33179a04c7cab50e31332362c6b7ff74 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33179a04c7cab50e31332362c6b7ff74, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33179a04c7cab50e31332362c6b7ff74->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33179a04c7cab50e31332362c6b7ff74, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33179a04c7cab50e31332362c6b7ff74,
        type_description_1,
        par_aData
    );


    // Release cached frame.
    if ( frame_33179a04c7cab50e31332362c6b7ff74 == cache_frame_33179a04c7cab50e31332362c6b7ff74 )
    {
        Py_DECREF( frame_33179a04c7cab50e31332362c6b7ff74 );
    }
    cache_frame_33179a04c7cab50e31332362c6b7ff74 = NULL;

    assertFrameObject( frame_33179a04c7cab50e31332362c6b7ff74 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_2_ConvertTo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_aData );
    par_aData = NULL;

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

    Py_XDECREF( par_aData );
    par_aData = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_2_ConvertTo );
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


static PyObject *impl_Inc$Util$Str$$$function_3_GetPart( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aStr = python_pars[ 0 ];
    PyObject *par_aIdx = python_pars[ 1 ];
    PyObject *par_aDelim = python_pars[ 2 ];
    PyObject *var_Items = NULL;
    struct Nuitka_FrameObject *frame_dec0c3a82265b3c20b9c65e53f9723e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dec0c3a82265b3c20b9c65e53f9723e2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dec0c3a82265b3c20b9c65e53f9723e2, codeobj_dec0c3a82265b3c20b9c65e53f9723e2, module_Inc$Util$Str, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dec0c3a82265b3c20b9c65e53f9723e2 = cache_frame_dec0c3a82265b3c20b9c65e53f9723e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dec0c3a82265b3c20b9c65e53f9723e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dec0c3a82265b3c20b9c65e53f9723e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_aStr );
        tmp_called_instance_1 = par_aStr;
        CHECK_OBJECT( par_aDelim );
        tmp_args_element_name_1 = par_aDelim;
        frame_dec0c3a82265b3c20b9c65e53f9723e2->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_Items == NULL );
        var_Items = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_aIdx );
        tmp_compexpr_left_1 = par_aIdx;
        CHECK_OBJECT( var_Items );
        tmp_len_arg_1 = var_Items;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_Items );
            tmp_subscribed_name_1 = var_Items;
            CHECK_OBJECT( par_aIdx );
            tmp_subscript_name_1 = par_aIdx;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_str_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dec0c3a82265b3c20b9c65e53f9723e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dec0c3a82265b3c20b9c65e53f9723e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dec0c3a82265b3c20b9c65e53f9723e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dec0c3a82265b3c20b9c65e53f9723e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dec0c3a82265b3c20b9c65e53f9723e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dec0c3a82265b3c20b9c65e53f9723e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dec0c3a82265b3c20b9c65e53f9723e2,
        type_description_1,
        par_aStr,
        par_aIdx,
        par_aDelim,
        var_Items
    );


    // Release cached frame.
    if ( frame_dec0c3a82265b3c20b9c65e53f9723e2 == cache_frame_dec0c3a82265b3c20b9c65e53f9723e2 )
    {
        Py_DECREF( frame_dec0c3a82265b3c20b9c65e53f9723e2 );
    }
    cache_frame_dec0c3a82265b3c20b9c65e53f9723e2 = NULL;

    assertFrameObject( frame_dec0c3a82265b3c20b9c65e53f9723e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_3_GetPart );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Items );
    Py_DECREF( var_Items );
    var_Items = NULL;

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aDelim );
    Py_DECREF( par_aDelim );
    par_aDelim = NULL;

    CHECK_OBJECT( (PyObject *)par_aIdx );
    Py_DECREF( par_aIdx );
    par_aIdx = NULL;

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

    Py_XDECREF( var_Items );
    var_Items = NULL;

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aDelim );
    Py_DECREF( par_aDelim );
    par_aDelim = NULL;

    CHECK_OBJECT( (PyObject *)par_aIdx );
    Py_DECREF( par_aIdx );
    par_aIdx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_3_GetPart );
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


static PyObject *impl_Inc$Util$Str$$$function_4_ToFloat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aStr = python_pars[ 0 ];
    PyObject *var_Result = NULL;
    struct Nuitka_FrameObject *frame_b2650662b2a31accb782b610dcf59f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b2650662b2a31accb782b610dcf59f06 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2650662b2a31accb782b610dcf59f06, codeobj_b2650662b2a31accb782b610dcf59f06, module_Inc$Util$Str, sizeof(void *)+sizeof(void *) );
    frame_b2650662b2a31accb782b610dcf59f06 = cache_frame_b2650662b2a31accb782b610dcf59f06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2650662b2a31accb782b610dcf59f06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2650662b2a31accb782b610dcf59f06 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_aStr );
        tmp_called_instance_1 = par_aStr;
        frame_b2650662b2a31accb782b610dcf59f06->m_frame.f_lineno = 39;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_dot_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_aStr;
            assert( old != NULL );
            par_aStr = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT( par_aStr );
        tmp_float_arg_1 = par_aStr;
        tmp_assign_source_2 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( var_Result == NULL );
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
    PRESERVE_FRAME_EXCEPTION( frame_b2650662b2a31accb782b610dcf59f06 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b2650662b2a31accb782b610dcf59f06, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b2650662b2a31accb782b610dcf59f06, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert( var_Result == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_Result = tmp_assign_source_3;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_4_ToFloat );
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b2650662b2a31accb782b610dcf59f06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b2650662b2a31accb782b610dcf59f06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2650662b2a31accb782b610dcf59f06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2650662b2a31accb782b610dcf59f06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2650662b2a31accb782b610dcf59f06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2650662b2a31accb782b610dcf59f06,
        type_description_1,
        par_aStr,
        var_Result
    );


    // Release cached frame.
    if ( frame_b2650662b2a31accb782b610dcf59f06 == cache_frame_b2650662b2a31accb782b610dcf59f06 )
    {
        Py_DECREF( frame_b2650662b2a31accb782b610dcf59f06 );
    }
    cache_frame_b2650662b2a31accb782b610dcf59f06 = NULL;

    assertFrameObject( frame_b2650662b2a31accb782b610dcf59f06 );

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
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_4_ToFloat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)var_Result );
    Py_DECREF( var_Result );
    var_Result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_4_ToFloat );
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


static PyObject *impl_Inc$Util$Str$$$function_5_MultiRepl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aStr = python_pars[ 0 ];
    PyObject *par_aFindRepl = python_pars[ 1 ];
    PyObject *var_Repl = NULL;
    PyObject *var_Find = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8c40fea725a658aac315222cadf4fa1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8c40fea725a658aac315222cadf4fa1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c40fea725a658aac315222cadf4fa1d, codeobj_8c40fea725a658aac315222cadf4fa1d, module_Inc$Util$Str, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8c40fea725a658aac315222cadf4fa1d = cache_frame_8c40fea725a658aac315222cadf4fa1d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c40fea725a658aac315222cadf4fa1d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c40fea725a658aac315222cadf4fa1d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_aFindRepl );
        tmp_called_instance_1 = par_aFindRepl;
        frame_8c40fea725a658aac315222cadf4fa1d->m_frame.f_lineno = 48;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 48;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_4 == NULL )
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


            type_description_1 = "oooo";
            exception_lineno = 48;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_5 == NULL )
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


            type_description_1 = "oooo";
            exception_lineno = 48;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooo";
                    exception_lineno = 48;
                    goto try_except_handler_4;
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

            type_description_1 = "oooo";
            exception_lineno = 48;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_Find;
            var_Find = tmp_assign_source_6;
            Py_INCREF( var_Find );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_Repl;
            var_Repl = tmp_assign_source_7;
            Py_INCREF( var_Repl );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_aStr );
        tmp_called_instance_2 = par_aStr;
        CHECK_OBJECT( var_Find );
        tmp_args_element_name_1 = var_Find;
        CHECK_OBJECT( var_Repl );
        tmp_args_element_name_2 = var_Repl;
        frame_8c40fea725a658aac315222cadf4fa1d->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_aStr;
            assert( old != NULL );
            par_aStr = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c40fea725a658aac315222cadf4fa1d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c40fea725a658aac315222cadf4fa1d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c40fea725a658aac315222cadf4fa1d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c40fea725a658aac315222cadf4fa1d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c40fea725a658aac315222cadf4fa1d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c40fea725a658aac315222cadf4fa1d,
        type_description_1,
        par_aStr,
        par_aFindRepl,
        var_Repl,
        var_Find
    );


    // Release cached frame.
    if ( frame_8c40fea725a658aac315222cadf4fa1d == cache_frame_8c40fea725a658aac315222cadf4fa1d )
    {
        Py_DECREF( frame_8c40fea725a658aac315222cadf4fa1d );
    }
    cache_frame_8c40fea725a658aac315222cadf4fa1d = NULL;

    assertFrameObject( frame_8c40fea725a658aac315222cadf4fa1d );

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

    CHECK_OBJECT( par_aStr );
    tmp_return_value = par_aStr;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_5_MultiRepl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    Py_XDECREF( var_Repl );
    var_Repl = NULL;

    Py_XDECREF( var_Find );
    var_Find = NULL;

    CHECK_OBJECT( (PyObject *)par_aFindRepl );
    Py_DECREF( par_aFindRepl );
    par_aFindRepl = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_aStr );
    par_aStr = NULL;

    Py_XDECREF( var_Repl );
    var_Repl = NULL;

    Py_XDECREF( var_Find );
    var_Find = NULL;

    CHECK_OBJECT( (PyObject *)par_aFindRepl );
    Py_DECREF( par_aFindRepl );
    par_aFindRepl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_5_MultiRepl );
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


static PyObject *impl_Inc$Util$Str$$$function_6_ReplaceIdx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_aStr = python_pars[ 0 ];
    PyObject *par_aIdx = python_pars[ 1 ];
    PyObject *par_aReplace = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9758ea2db334c1f74cb67442797d3a28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9758ea2db334c1f74cb67442797d3a28 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9758ea2db334c1f74cb67442797d3a28, codeobj_9758ea2db334c1f74cb67442797d3a28, module_Inc$Util$Str, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9758ea2db334c1f74cb67442797d3a28 = cache_frame_9758ea2db334c1f74cb67442797d3a28;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9758ea2db334c1f74cb67442797d3a28 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9758ea2db334c1f74cb67442797d3a28 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_aStr );
        tmp_slice_source_1 = par_aStr;
        CHECK_OBJECT( par_aIdx );
        tmp_slice_upper_1 = par_aIdx;
        tmp_left_name_2 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_aReplace );
        tmp_right_name_1 = par_aReplace;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_aStr );
        tmp_slice_source_2 = par_aStr;
        CHECK_OBJECT( par_aIdx );
        tmp_left_name_3 = par_aIdx;
        CHECK_OBJECT( par_aReplace );
        tmp_len_arg_1 = par_aReplace;
        tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_slice_lower_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
        Py_DECREF( tmp_slice_lower_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9758ea2db334c1f74cb67442797d3a28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9758ea2db334c1f74cb67442797d3a28 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9758ea2db334c1f74cb67442797d3a28 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9758ea2db334c1f74cb67442797d3a28, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9758ea2db334c1f74cb67442797d3a28->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9758ea2db334c1f74cb67442797d3a28, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9758ea2db334c1f74cb67442797d3a28,
        type_description_1,
        par_aStr,
        par_aIdx,
        par_aReplace
    );


    // Release cached frame.
    if ( frame_9758ea2db334c1f74cb67442797d3a28 == cache_frame_9758ea2db334c1f74cb67442797d3a28 )
    {
        Py_DECREF( frame_9758ea2db334c1f74cb67442797d3a28 );
    }
    cache_frame_9758ea2db334c1f74cb67442797d3a28 = NULL;

    assertFrameObject( frame_9758ea2db334c1f74cb67442797d3a28 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_6_ReplaceIdx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aIdx );
    Py_DECREF( par_aIdx );
    par_aIdx = NULL;

    CHECK_OBJECT( (PyObject *)par_aReplace );
    Py_DECREF( par_aReplace );
    par_aReplace = NULL;

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

    CHECK_OBJECT( (PyObject *)par_aStr );
    Py_DECREF( par_aStr );
    par_aStr = NULL;

    CHECK_OBJECT( (PyObject *)par_aIdx );
    Py_DECREF( par_aIdx );
    par_aIdx = NULL;

    CHECK_OBJECT( (PyObject *)par_aReplace );
    Py_DECREF( par_aReplace );
    par_aReplace = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Inc$Util$Str$$$function_6_ReplaceIdx );
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



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_1_ActionDelim( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_1_ActionDelim,
        const_str_plain_ActionDelim,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7bbc4ebc758e9015f91e1070ed982446,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_2_ConvertTo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_2_ConvertTo,
        const_str_plain_ConvertTo,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_33179a04c7cab50e31332362c6b7ff74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_3_GetPart( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_3_GetPart,
        const_str_plain_GetPart,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dec0c3a82265b3c20b9c65e53f9723e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_4_ToFloat(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_4_ToFloat,
        const_str_plain_ToFloat,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b2650662b2a31accb782b610dcf59f06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_5_MultiRepl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_5_MultiRepl,
        const_str_plain_MultiRepl,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8c40fea725a658aac315222cadf4fa1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Inc$Util$Str$$$function_6_ReplaceIdx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Inc$Util$Str$$$function_6_ReplaceIdx,
        const_str_plain_ReplaceIdx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9758ea2db334c1f74cb67442797d3a28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Inc$Util$Str,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Inc$Util$Str =
{
    PyModuleDef_HEAD_INIT,
    "Inc.Util.Str",
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

MOD_INIT_DECL( Inc$Util$Str )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Inc$Util$Str );
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
    puts("Inc.Util.Str: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Util.Str: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Inc.Util.Str: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initInc$Util$Str" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Inc$Util$Str = Py_InitModule4(
        "Inc.Util.Str",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Inc$Util$Str = PyModule_Create( &mdef_Inc$Util$Str );
#endif

    moduledict_Inc$Util$Str = MODULE_DICT( module_Inc$Util$Str );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Inc$Util$Str,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Inc$Util$Str,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Util$Str,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Inc$Util$Str,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Inc$Util$Str );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c59df5d0449b8a72b0f2444bce76d1e7, module_Inc$Util$Str );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_1fcea7fa7d09f1f00202ba79daae7ec7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ade26fea59a84e8b725866efbaa8d71b;
        UPDATE_STRING_DICT0( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4d94cef2e3cb9b4f1ce98a9ab2f21503;
        UPDATE_STRING_DICT0( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1fcea7fa7d09f1f00202ba79daae7ec7 = MAKE_MODULE_FRAME( codeobj_1fcea7fa7d09f1f00202ba79daae7ec7, module_Inc$Util$Str );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1fcea7fa7d09f1f00202ba79daae7ec7 );
    assert( Py_REFCNT( frame_1fcea7fa7d09f1f00202ba79daae7ec7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_Inc$Util$Str;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_1fcea7fa7d09f1f00202ba79daae7ec7->m_frame.f_lineno = 9;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fcea7fa7d09f1f00202ba79daae7ec7 );
#endif
    popFrameStack();

    assertFrameObject( frame_1fcea7fa7d09f1f00202ba79daae7ec7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fcea7fa7d09f1f00202ba79daae7ec7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fcea7fa7d09f1f00202ba79daae7ec7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fcea7fa7d09f1f00202ba79daae7ec7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fcea7fa7d09f1f00202ba79daae7ec7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_chr_44_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_4 = MAKE_FUNCTION_Inc$Util$Str$$$function_1_ActionDelim( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ActionDelim, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_Inc$Util$Str$$$function_2_ConvertTo(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ConvertTo, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_str_chr_44_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_6 = MAKE_FUNCTION_Inc$Util$Str$$$function_3_GetPart( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_GetPart, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_Inc$Util$Str$$$function_4_ToFloat(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ToFloat, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_Inc$Util$Str$$$function_5_MultiRepl(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_MultiRepl, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_Inc$Util$Str$$$function_6_ReplaceIdx(  );



        UPDATE_STRING_DICT1( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain_ReplaceIdx, tmp_assign_source_9 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Inc$Util$Str, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Inc$Util$Str );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
