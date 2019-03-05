/* Generated code for Python module 'Crypto.Cipher.blockalgo'
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

/* The "_module_Crypto$Cipher$blockalgo" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Cipher$blockalgo;
PyDictObject *moduledict_Crypto$Cipher$blockalgo;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_2bc9703728747bbcd135babfdc13631c;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple;
static PyObject *const_tuple_4584f77baf037914bf9319e29ca4d409_tuple;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_MODE_PGP;
extern PyObject *const_str_plain_MODE_ECB;
extern PyObject *const_str_plain_len;
static PyObject *const_str_digest_c36935a6e8aa2e6f0944330c100c4a48;
extern PyObject *const_str_plain_MODE_CTR;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_BlockAlgo;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_27446b9c01ba7eab3fbc1b18fcc28aec;
static PyObject *const_str_digest_5d9523013693d616c1ea6fa50ff15c83;
static PyObject *const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_MODE_CBC;
static PyObject *const_str_digest_ce7882bafc945f73fd2d3cec13230179;
static PyObject *const_str_plain_IV_cipher;
extern PyObject *const_str_plain_MODE_OFB;
static PyObject *const_str_plain__done_first_block;
static PyObject *const_str_plain_IV;
static PyObject *const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple;
static PyObject *const_str_digest_6a6e7bcb97aa1da0c6798043f86c1d0b;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__done_last_block;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_encrypt;
extern PyObject *const_str_plain_True;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_chr_0_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
static PyObject *const_str_plain_ValueError;
extern PyObject *const_str_plain_MODE_OPENPGP;
static PyObject *const_str_plain_iv;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_decrypt;
static PyObject *const_str_plain__cipher;
extern PyObject *const_str_plain_MODE_CFB;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_param;
extern PyObject *const_str_plain_b;
static PyObject *const_str_chr_0;
static PyObject *const_str_plain_padding_length;
static PyObject *const_tuple_str_digest_70d3e63e44090a0e20152c3872406823_tuple;
static PyObject *const_str_plain_segment_size;
static PyObject *const_str_plain_plaintext;
static PyObject *const_str_digest_45a9ce3c33a14012415d7bae9663615f;
static PyObject *const_str_plain__encrypted_IV;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_index;
static PyObject *const_str_plain_padded;
static PyObject *const_str_digest_24f24f2cb3f34167a114646c5ab080ab;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_str_digest_611fd9809bb354f0413256953f0ad764;
static PyObject *const_tuple_str_digest_611fd9809bb354f0413256953f0ad764_tuple;
static PyObject *const_str_plain_factory;
static PyObject *const_str_plain_ciphertext;
static PyObject *const_str_plain__getParameter;
static PyObject *const_str_plain_default;
static PyObject *const_str_digest_7bd3bae3cf2f8bdf18efe0b093080597;
static PyObject *const_str_digest_d2177928de453c31dedaf25e6c75a8bf;
static PyObject *const_str_digest_37a50e8ec832bbdb6f308fbdfe7b4508;
static PyObject *const_str_digest_70d3e63e44090a0e20152c3872406823;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_2bc9703728747bbcd135babfdc13631c = UNSTREAM_STRING( &constant_bin[ 8126 ], 33, 0 );
    const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_plaintext = UNSTREAM_STRING( &constant_bin[ 3544 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 1, const_str_plain_plaintext ); Py_INCREF( const_str_plain_plaintext );
    const_str_plain_padding_length = UNSTREAM_STRING( &constant_bin[ 8159 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 2, const_str_plain_padding_length ); Py_INCREF( const_str_plain_padding_length );
    const_str_plain_padded = UNSTREAM_STRING( &constant_bin[ 8173 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 3, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_4584f77baf037914bf9319e29ca4d409_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_default = UNSTREAM_STRING( &constant_bin[ 8179 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 4, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_str_plain_param = UNSTREAM_STRING( &constant_bin[ 8186 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 5, const_str_plain_param ); Py_INCREF( const_str_plain_param );
    const_str_digest_c36935a6e8aa2e6f0944330c100c4a48 = UNSTREAM_STRING( &constant_bin[ 8191 ], 59, 0 );
    const_str_digest_27446b9c01ba7eab3fbc1b18fcc28aec = UNSTREAM_STRING( &constant_bin[ 8250 ], 32, 0 );
    const_str_digest_5d9523013693d616c1ea6fa50ff15c83 = UNSTREAM_STRING( &constant_bin[ 8282 ], 52, 0 );
    const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_factory = UNSTREAM_STRING( &constant_bin[ 8334 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 1, const_str_plain_factory ); Py_INCREF( const_str_plain_factory );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_IV_cipher = UNSTREAM_STRING( &constant_bin[ 8341 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 5, const_str_plain_IV_cipher ); Py_INCREF( const_str_plain_IV_cipher );
    const_str_digest_ce7882bafc945f73fd2d3cec13230179 = UNSTREAM_STRING( &constant_bin[ 8350 ], 1368, 0 );
    const_str_plain__done_first_block = UNSTREAM_STRING( &constant_bin[ 9718 ], 17, 1 );
    const_str_plain_IV = UNSTREAM_STRING( &constant_bin[ 6183 ], 2, 1 );
    const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_ciphertext = UNSTREAM_STRING( &constant_bin[ 3616 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 1, const_str_plain_ciphertext ); Py_INCREF( const_str_plain_ciphertext );
    PyTuple_SET_ITEM( const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 2, const_str_plain_padding_length ); Py_INCREF( const_str_plain_padding_length );
    PyTuple_SET_ITEM( const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 3, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_6a6e7bcb97aa1da0c6798043f86c1d0b = UNSTREAM_STRING( &constant_bin[ 9735 ], 1178, 0 );
    const_str_plain__done_last_block = UNSTREAM_STRING( &constant_bin[ 10913 ], 16, 1 );
    const_tuple_str_chr_0_tuple = PyTuple_New( 1 );
    const_str_chr_0 = UNSTREAM_CHAR( 0, 0 );
    PyTuple_SET_ITEM( const_tuple_str_chr_0_tuple, 0, const_str_chr_0 ); Py_INCREF( const_str_chr_0 );
    const_str_plain_ValueError = UNSTREAM_STRING( &constant_bin[ 10929 ], 10, 1 );
    const_str_plain_iv = UNSTREAM_STRING( &constant_bin[ 3098 ], 2, 1 );
    const_str_plain__cipher = UNSTREAM_STRING( &constant_bin[ 8343 ], 7, 1 );
    const_tuple_str_digest_70d3e63e44090a0e20152c3872406823_tuple = PyTuple_New( 1 );
    const_str_digest_70d3e63e44090a0e20152c3872406823 = UNSTREAM_STRING( &constant_bin[ 10939 ], 27, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_70d3e63e44090a0e20152c3872406823_tuple, 0, const_str_digest_70d3e63e44090a0e20152c3872406823 ); Py_INCREF( const_str_digest_70d3e63e44090a0e20152c3872406823 );
    const_str_plain_segment_size = UNSTREAM_STRING( &constant_bin[ 6894 ], 12, 1 );
    const_str_digest_45a9ce3c33a14012415d7bae9663615f = UNSTREAM_STRING( &constant_bin[ 10966 ], 70, 0 );
    const_str_plain__encrypted_IV = UNSTREAM_STRING( &constant_bin[ 11036 ], 13, 1 );
    const_str_digest_24f24f2cb3f34167a114646c5ab080ab = UNSTREAM_STRING( &constant_bin[ 11049 ], 41, 0 );
    const_str_digest_611fd9809bb354f0413256953f0ad764 = UNSTREAM_STRING( &constant_bin[ 11090 ], 37, 0 );
    const_tuple_str_digest_611fd9809bb354f0413256953f0ad764_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_611fd9809bb354f0413256953f0ad764_tuple, 0, const_str_digest_611fd9809bb354f0413256953f0ad764 ); Py_INCREF( const_str_digest_611fd9809bb354f0413256953f0ad764 );
    const_str_plain__getParameter = UNSTREAM_STRING( &constant_bin[ 11127 ], 13, 1 );
    const_str_digest_7bd3bae3cf2f8bdf18efe0b093080597 = UNSTREAM_STRING( &constant_bin[ 11140 ], 70, 0 );
    const_str_digest_d2177928de453c31dedaf25e6c75a8bf = UNSTREAM_STRING( &constant_bin[ 8258 ], 23, 0 );
    const_str_digest_37a50e8ec832bbdb6f308fbdfe7b4508 = UNSTREAM_STRING( &constant_bin[ 11210 ], 52, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Cipher$blockalgo( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_99426ec0051cc1889da54dae955ff9dd;
static PyCodeObject *codeobj_6cc280c777eb9d301fcf9979e998b401;
static PyCodeObject *codeobj_88b8e81d9f453f9626654925f6a69140;
static PyCodeObject *codeobj_c8f245438c403c35e3ac6f49ca50dd39;
static PyCodeObject *codeobj_d0825c583851220c381c9a6267e1a1dd;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c36935a6e8aa2e6f0944330c100c4a48;
    codeobj_99426ec0051cc1889da54dae955ff9dd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_27446b9c01ba7eab3fbc1b18fcc28aec, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6cc280c777eb9d301fcf9979e998b401 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 136, const_tuple_ac46fe12e36256fff28f0f9e5df3c740_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_88b8e81d9f453f9626654925f6a69140 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getParameter, 124, const_tuple_4584f77baf037914bf9319e29ca4d409_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8f245438c403c35e3ac6f49ca50dd39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decrypt, 246, const_tuple_81cf95b09bf9cd9a07e4da97b0b25f91_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0825c583851220c381c9a6267e1a1dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encrypt, 187, const_tuple_5360c8b96e8d0f79b1c0319beead8886_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_1__getParameter( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_3_encrypt(  );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_4_decrypt(  );


// The module function definitions.
static PyObject *impl_Crypto$Cipher$blockalgo$$$function_1__getParameter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *par_default = python_pars[ 4 ];
    PyObject *var_param = NULL;
    struct Nuitka_FrameObject *frame_88b8e81d9f453f9626654925f6a69140;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_88b8e81d9f453f9626654925f6a69140 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88b8e81d9f453f9626654925f6a69140, codeobj_88b8e81d9f453f9626654925f6a69140, module_Crypto$Cipher$blockalgo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_88b8e81d9f453f9626654925f6a69140 = cache_frame_88b8e81d9f453f9626654925f6a69140;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88b8e81d9f453f9626654925f6a69140 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88b8e81d9f453f9626654925f6a69140 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_88b8e81d9f453f9626654925f6a69140->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_param == NULL );
        var_param = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
            exception_tb = NULL;

            exception_lineno = 127;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_2 = par_args;
        frame_88b8e81d9f453f9626654925f6a69140->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_index );
        tmp_compexpr_right_1 = par_index;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_param );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_param );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                    exception_tb = NULL;

                    exception_lineno = 129;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                tmp_left_name_1 = const_str_digest_2bc9703728747bbcd135babfdc13631c;
                CHECK_OBJECT( par_name );
                tmp_right_name_1 = par_name;
                tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 129;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_88b8e81d9f453f9626654925f6a69140->m_frame.f_lineno = 129;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 129;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 129;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_args );
            tmp_subscribed_name_1 = par_args;
            CHECK_OBJECT( par_index );
            tmp_subscript_name_1 = par_index;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_param;
                assert( old != NULL );
                var_param = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( var_param );
        tmp_or_left_value_1 = var_param;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_default );
        tmp_or_right_value_1 = par_default;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88b8e81d9f453f9626654925f6a69140 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88b8e81d9f453f9626654925f6a69140 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88b8e81d9f453f9626654925f6a69140 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88b8e81d9f453f9626654925f6a69140, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88b8e81d9f453f9626654925f6a69140->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88b8e81d9f453f9626654925f6a69140, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88b8e81d9f453f9626654925f6a69140,
        type_description_1,
        par_name,
        par_index,
        par_args,
        par_kwargs,
        par_default,
        var_param
    );


    // Release cached frame.
    if ( frame_88b8e81d9f453f9626654925f6a69140 == cache_frame_88b8e81d9f453f9626654925f6a69140 )
    {
        Py_DECREF( frame_88b8e81d9f453f9626654925f6a69140 );
    }
    cache_frame_88b8e81d9f453f9626654925f6a69140 = NULL;

    assertFrameObject( frame_88b8e81d9f453f9626654925f6a69140 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_1__getParameter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_param );
    Py_DECREF( var_param );
    var_param = NULL;

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

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_param );
    var_param = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_1__getParameter );
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


static PyObject *impl_Crypto$Cipher$blockalgo$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_factory = python_pars[ 1 ];
    PyObject *par_key = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *var_IV_cipher = NULL;
    struct Nuitka_FrameObject *frame_6cc280c777eb9d301fcf9979e998b401;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6cc280c777eb9d301fcf9979e998b401 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6cc280c777eb9d301fcf9979e998b401, codeobj_6cc280c777eb9d301fcf9979e998b401, module_Crypto$Cipher$blockalgo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6cc280c777eb9d301fcf9979e998b401 = cache_frame_6cc280c777eb9d301fcf9979e998b401;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6cc280c777eb9d301fcf9979e998b401 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6cc280c777eb9d301fcf9979e998b401 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain__getParameter );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__getParameter );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_getParameter" );
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = const_str_plain_mode;
        tmp_args_name_1 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_tuple_element_1 = par_args;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_tuple_element_1 = par_kwargs;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_ECB );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_ECB );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_ECB" );
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_2;
        tmp_dict_key_1 = const_str_plain_default;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 137;
        tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_mode, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_factory );
        tmp_source_name_1 = par_factory;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_block_size );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_block_size, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_OPENPGP" );
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dircall_arg4_1;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( par_factory );
            tmp_source_name_3 = par_factory;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key );
            tmp_tuple_element_2 = par_key;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_args );
            tmp_dircall_arg3_1 = par_args;
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg3_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assattr_name_3 = impl___internal__$$$function_1_complex_call_helper_pos_star_list_star_dict( dir_call_args );
            }
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__cipher, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__cipher );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IV );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_IV, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_False );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_False );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "False" );
                exception_tb = NULL;

                exception_lineno = 151;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_5 = tmp_mvar_value_4;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__done_first_block, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_assattr_target_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_False );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_False );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "False" );
                exception_tb = NULL;

                exception_lineno = 152;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_name_6 = tmp_mvar_value_5;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__done_last_block, tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_assattr_target_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain__getParameter );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__getParameter );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_getParameter" );
                exception_tb = NULL;

                exception_lineno = 153;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_6;
            tmp_args_element_name_1 = const_str_plain_iv;
            tmp_args_element_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_3 = par_args;
            CHECK_OBJECT( par_kwargs );
            tmp_args_element_name_4 = par_kwargs;
            frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
            }

            if ( tmp_assattr_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_IV, tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IV );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_7;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                    exception_tb = NULL;

                    exception_lineno = 155;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_7;
                frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 155;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_70d3e63e44090a0e20152c3872406823_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 155;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 155;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_factory );
            tmp_source_name_7 = par_factory;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_new );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key );
            tmp_tuple_element_3 = par_key;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_CFB );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_CFB );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_CFB" );
                exception_tb = NULL;

                exception_lineno = 158;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = tmp_mvar_value_8;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_b );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
                exception_tb = NULL;

                exception_lineno = 159;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_9;
            frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 159;
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 159;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_block_size );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 159;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_3 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 159;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_block_size );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 160;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_8;
            tmp_dict_value_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 160;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_segment_size;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 158;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_IV_cipher == NULL );
            var_IV_cipher = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                exception_tb = NULL;

                exception_lineno = 163;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_IV );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_block_size );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 163;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assattr_name_8;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_12;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_left_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_source_name_13;
                PyObject *tmp_right_name_3;
                Py_ssize_t tmp_sliceslicedel_index_lower_1;
                Py_ssize_t tmp_slice_index_upper_1;
                PyObject *tmp_slice_source_2;
                PyObject *tmp_source_name_14;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_called_name_8;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_source_name_15;
                PyObject *tmp_right_name_6;
                PyObject *tmp_slice_upper_1;
                PyObject *tmp_left_name_7;
                PyObject *tmp_source_name_16;
                PyObject *tmp_right_name_7;
                PyObject *tmp_assattr_target_8;
                CHECK_OBJECT( var_IV_cipher );
                tmp_source_name_12 = var_IV_cipher;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_encrypt );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_IV );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_sliceslicedel_index_lower_1 = -2;
                tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
                CHECK_OBJECT( par_self );
                tmp_source_name_14 = par_self;
                tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_IV );
                if ( tmp_slice_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
                Py_DECREF( tmp_slice_source_2 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_b );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
                    exception_tb = NULL;

                    exception_lineno = 167;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_8 = tmp_mvar_value_11;
                frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 167;
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 167;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_block_size );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_3 );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 167;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_6 = const_int_pos_2;
                tmp_right_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_3 );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 167;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 167;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 166;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 165;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_slice_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_slice_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_16 = par_self;
                tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_block_size );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_slice_source_1 );

                    exception_lineno = 168;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_7 = const_int_pos_2;
                tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_left_name_7 );
                if ( tmp_slice_upper_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_slice_source_1 );

                    exception_lineno = 168;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assattr_name_8 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
                Py_DECREF( tmp_slice_source_1 );
                Py_DECREF( tmp_slice_upper_1 );
                if ( tmp_assattr_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_8 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__encrypted_IV, tmp_assattr_name_8 );
                Py_DECREF( tmp_assattr_name_8 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 165;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_called_name_9;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_17;
                PyObject *tmp_left_name_8;
                PyObject *tmp_source_name_18;
                PyObject *tmp_right_name_8;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                    exception_tb = NULL;

                    exception_lineno = 169;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_9 = tmp_mvar_value_12;
                CHECK_OBJECT( par_self );
                tmp_source_name_17 = par_self;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_IV );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 169;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                }

                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_18 = par_self;
                tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_block_size );
                if ( tmp_left_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 169;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_8 = const_int_pos_2;
                tmp_compexpr_right_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_8 );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_3 );

                    exception_lineno = 169;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assattr_name_9;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_assattr_target_9;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_19 = par_self;
                    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_IV );
                    if ( tmp_assattr_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 171;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_9 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__encrypted_IV, tmp_assattr_name_9 );
                    Py_DECREF( tmp_assattr_name_9 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 171;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_assattr_name_10;
                    PyObject *tmp_slice_source_3;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_right_name_9;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_right_name_11;
                    PyObject *tmp_slice_upper_2;
                    PyObject *tmp_left_name_12;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_right_name_12;
                    PyObject *tmp_assattr_target_10;
                    CHECK_OBJECT( var_IV_cipher );
                    tmp_source_name_20 = var_IV_cipher;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_decrypt );
                    if ( tmp_called_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_21 = par_self;
                    tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_IV );
                    if ( tmp_left_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_b );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
                        exception_tb = NULL;

                        exception_lineno = 173;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_11 = tmp_mvar_value_13;
                    frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 173;
                    tmp_left_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

                    if ( tmp_left_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );

                        exception_lineno = 173;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_22 = par_self;
                    tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_block_size );
                    if ( tmp_left_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );
                        Py_DECREF( tmp_left_name_10 );

                        exception_lineno = 173;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_11 = const_int_pos_2;
                    tmp_right_name_10 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
                    Py_DECREF( tmp_left_name_11 );
                    if ( tmp_right_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );
                        Py_DECREF( tmp_left_name_10 );

                        exception_lineno = 173;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
                    Py_DECREF( tmp_left_name_10 );
                    Py_DECREF( tmp_right_name_10 );
                    if ( tmp_right_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_left_name_9 );

                        exception_lineno = 173;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_right_name_9 );
                    if ( tmp_args_element_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 172;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_slice_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_8 );
                    if ( tmp_slice_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_23 = par_self;
                    tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_block_size );
                    if ( tmp_left_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_slice_source_3 );

                        exception_lineno = 174;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_12 = const_int_pos_2;
                    tmp_slice_upper_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_12, tmp_right_name_12 );
                    Py_DECREF( tmp_left_name_12 );
                    if ( tmp_slice_upper_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_slice_source_3 );

                        exception_lineno = 174;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_10 = LOOKUP_SLICE( tmp_slice_source_3, Py_None, tmp_slice_upper_2 );
                    Py_DECREF( tmp_slice_source_3 );
                    Py_DECREF( tmp_slice_upper_2 );
                    if ( tmp_assattr_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_10 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_IV, tmp_assattr_name_10 );
                    Py_DECREF( tmp_assattr_name_10 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 172;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    Py_ssize_t tmp_sliceslicedel_index_lower_2;
                    Py_ssize_t tmp_slice_index_upper_2;
                    PyObject *tmp_slice_source_4;
                    PyObject *tmp_source_name_24;
                    Py_ssize_t tmp_sliceslicedel_index_lower_3;
                    Py_ssize_t tmp_slice_index_upper_3;
                    PyObject *tmp_slice_source_5;
                    PyObject *tmp_source_name_25;
                    tmp_sliceslicedel_index_lower_2 = -2;
                    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_24 = par_self;
                    tmp_slice_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_IV );
                    if ( tmp_slice_source_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 175;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
                    Py_DECREF( tmp_slice_source_4 );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 175;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_sliceslicedel_index_lower_3 = -4;
                    tmp_slice_index_upper_3 = -2;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_25 = par_self;
                    tmp_slice_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_IV );
                    if ( tmp_slice_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 175;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
                    Py_DECREF( tmp_slice_source_5 );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_4 );

                        exception_lineno = 175;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 175;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_12;
                        PyObject *tmp_mvar_value_14;
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                        if (unlikely( tmp_mvar_value_14 == NULL ))
                        {
                            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                        }

                        if ( tmp_mvar_value_14 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                            exception_tb = NULL;

                            exception_lineno = 176;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_12 = tmp_mvar_value_14;
                        frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 176;
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_digest_611fd9809bb354f0413256953f0ad764_tuple, 0 ) );

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 176;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 176;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_5:;
                }
                {
                    PyObject *tmp_assattr_name_11;
                    Py_ssize_t tmp_sliceslicedel_index_lower_4;
                    Py_ssize_t tmp_slice_index_upper_4;
                    PyObject *tmp_slice_source_6;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_assattr_target_11;
                    tmp_sliceslicedel_index_lower_4 = 0;
                    tmp_slice_index_upper_4 = -2;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_26 = par_self;
                    tmp_slice_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_IV );
                    if ( tmp_slice_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 177;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_11 = LOOKUP_INDEX_SLICE( tmp_slice_source_6, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
                    Py_DECREF( tmp_slice_source_6 );
                    if ( tmp_assattr_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 177;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_11 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_IV, tmp_assattr_name_11 );
                    Py_DECREF( tmp_assattr_name_11 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 177;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_name_13;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_left_name_13;
                    PyObject *tmp_right_name_13;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_left_name_14;
                    PyObject *tmp_source_name_28;
                    PyObject *tmp_right_name_14;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                    if (unlikely( tmp_mvar_value_15 == NULL ))
                    {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                    }

                    if ( tmp_mvar_value_15 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                        exception_tb = NULL;

                        exception_lineno = 179;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_13 = tmp_mvar_value_15;
                    tmp_left_name_13 = const_str_digest_5d9523013693d616c1ea6fa50ff15c83;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_27 = par_self;
                    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_block_size );
                    if ( tmp_tuple_element_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 180;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_13 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_13, 0, tmp_tuple_element_4 );
                    CHECK_OBJECT( par_self );
                    tmp_source_name_28 = par_self;
                    tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_block_size );
                    if ( tmp_left_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_13 );

                        exception_lineno = 180;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_14 = const_int_pos_2;
                    tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_14, tmp_right_name_14 );
                    Py_DECREF( tmp_left_name_14 );
                    if ( tmp_tuple_element_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_13 );

                        exception_lineno = 180;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_13, 1, tmp_tuple_element_4 );
                    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
                    Py_DECREF( tmp_right_name_13 );
                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 179;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 179;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_raise_type_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 179;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 179;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assattr_name_12;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_29;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_slice_source_7;
            PyObject *tmp_source_name_30;
            PyObject *tmp_slice_lower_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_31;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_left_name_15;
            PyObject *tmp_source_name_32;
            PyObject *tmp_right_name_15;
            PyObject *tmp_assattr_target_12;
            CHECK_OBJECT( par_factory );
            tmp_source_name_29 = par_factory;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_new );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key );
            tmp_tuple_element_5 = par_key;
            tmp_args_name_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_CFB );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_CFB );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_CFB" );
                exception_tb = NULL;

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_5 = tmp_mvar_value_16;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( par_self );
            tmp_source_name_30 = par_self;
            tmp_slice_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__encrypted_IV );
            if ( tmp_slice_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_31 = par_self;
            tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_block_size );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_slice_source_7 );

                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_slice_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_slice_lower_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_slice_source_7 );

                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = LOOKUP_SLICE( tmp_slice_source_7, tmp_slice_lower_1, Py_None );
            Py_DECREF( tmp_slice_source_7 );
            Py_DECREF( tmp_slice_lower_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_left_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_block_size );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 185;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_15 = const_int_pos_8;
            tmp_dict_value_3 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            if ( tmp_dict_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_14 );
                Py_DECREF( tmp_args_name_3 );

                exception_lineno = 185;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_3 = const_str_plain_segment_size;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_6cc280c777eb9d301fcf9979e998b401->m_frame.f_lineno = 183;
            tmp_assattr_name_12 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assattr_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_12 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__cipher, tmp_assattr_name_12 );
            Py_DECREF( tmp_assattr_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cc280c777eb9d301fcf9979e998b401 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6cc280c777eb9d301fcf9979e998b401 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6cc280c777eb9d301fcf9979e998b401, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6cc280c777eb9d301fcf9979e998b401->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6cc280c777eb9d301fcf9979e998b401, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6cc280c777eb9d301fcf9979e998b401,
        type_description_1,
        par_self,
        par_factory,
        par_key,
        par_args,
        par_kwargs,
        var_IV_cipher
    );


    // Release cached frame.
    if ( frame_6cc280c777eb9d301fcf9979e998b401 == cache_frame_6cc280c777eb9d301fcf9979e998b401 )
    {
        Py_DECREF( frame_6cc280c777eb9d301fcf9979e998b401 );
    }
    cache_frame_6cc280c777eb9d301fcf9979e998b401 = NULL;

    assertFrameObject( frame_6cc280c777eb9d301fcf9979e998b401 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_IV_cipher );
    var_IV_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_factory );
    Py_DECREF( par_factory );
    par_factory = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    Py_XDECREF( var_IV_cipher );
    var_IV_cipher = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_factory );
    Py_DECREF( par_factory );
    par_factory = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_2___init__ );
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


static PyObject *impl_Crypto$Cipher$blockalgo$$$function_3_encrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_plaintext = python_pars[ 1 ];
    PyObject *var_padding_length = NULL;
    PyObject *var_padded = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_d0825c583851220c381c9a6267e1a1dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0825c583851220c381c9a6267e1a1dd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0825c583851220c381c9a6267e1a1dd, codeobj_d0825c583851220c381c9a6267e1a1dd, module_Crypto$Cipher$blockalgo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0825c583851220c381c9a6267e1a1dd = cache_frame_d0825c583851220c381c9a6267e1a1dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0825c583851220c381c9a6267e1a1dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0825c583851220c381c9a6267e1a1dd ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_OPENPGP" );
            exception_tb = NULL;

            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                exception_tb = NULL;

                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_plaintext );
            tmp_args_element_name_1 = par_plaintext;
            frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_block_size );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_padding_length == NULL );
            var_padding_length = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_padding_length );
            tmp_compexpr_left_2 = var_padding_length;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooo";
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_attribute_value_1;
                int tmp_truth_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__done_last_block );
                if ( tmp_attribute_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 231;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_1 );

                    exception_lineno = 231;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_1 );
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_source_name_6;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                        exception_tb = NULL;

                        exception_lineno = 232;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_2 = tmp_mvar_value_3;
                    tmp_args_element_name_2 = const_str_digest_7bd3bae3cf2f8bdf18efe0b093080597;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_6 = par_self;
                    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_block_size );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 233;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 232;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_raise_type_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 232;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 232;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_1;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_True );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "True" );
                    exception_tb = NULL;

                    exception_lineno = 234;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_1 = tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__done_last_block, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 234;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( par_plaintext );
                tmp_left_name_4 = par_plaintext;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_b );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
                    exception_tb = NULL;

                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 235;
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_padding_length );
                tmp_right_name_5 = var_padding_length;
                tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_padded == NULL );
                var_padded = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_slice_upper_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__cipher );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 236;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_padded );
                tmp_args_element_name_4 = var_padded;
                frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 236;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encrypt, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_slice_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 236;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_slice_source_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                    exception_tb = NULL;

                    exception_lineno = 236;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( par_plaintext );
                tmp_args_element_name_5 = par_plaintext;
                frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 236;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_slice_upper_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_slice_upper_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_slice_source_1 );

                    exception_lineno = 236;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
                Py_DECREF( tmp_slice_source_1 );
                Py_DECREF( tmp_slice_upper_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 236;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_3;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__cipher );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 238;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_plaintext );
                tmp_args_element_name_6 = par_plaintext;
                frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 238;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encrypt, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 238;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_4;
            }
            branch_end_2:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__done_first_block );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_right_name_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__encrypted_IV );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 240;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_res );
                tmp_right_name_6 = var_res;
                tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 240;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_assattr_target_2;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_True );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "True" );
                    exception_tb = NULL;

                    exception_lineno = 241;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_2 = tmp_mvar_value_7;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__done_first_block, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 241;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_4:;
        }
        if ( var_res == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;

            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__cipher );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_plaintext );
        tmp_args_element_name_7 = par_plaintext;
        frame_d0825c583851220c381c9a6267e1a1dd->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encrypt, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0825c583851220c381c9a6267e1a1dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0825c583851220c381c9a6267e1a1dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0825c583851220c381c9a6267e1a1dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0825c583851220c381c9a6267e1a1dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0825c583851220c381c9a6267e1a1dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0825c583851220c381c9a6267e1a1dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0825c583851220c381c9a6267e1a1dd,
        type_description_1,
        par_self,
        par_plaintext,
        var_padding_length,
        var_padded,
        var_res
    );


    // Release cached frame.
    if ( frame_d0825c583851220c381c9a6267e1a1dd == cache_frame_d0825c583851220c381c9a6267e1a1dd )
    {
        Py_DECREF( frame_d0825c583851220c381c9a6267e1a1dd );
    }
    cache_frame_d0825c583851220c381c9a6267e1a1dd = NULL;

    assertFrameObject( frame_d0825c583851220c381c9a6267e1a1dd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_3_encrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_plaintext );
    Py_DECREF( par_plaintext );
    par_plaintext = NULL;

    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_plaintext );
    Py_DECREF( par_plaintext );
    par_plaintext = NULL;

    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_3_encrypt );
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


static PyObject *impl_Crypto$Cipher$blockalgo$$$function_4_decrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ciphertext = python_pars[ 1 ];
    PyObject *var_padding_length = NULL;
    PyObject *var_padded = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_c8f245438c403c35e3ac6f49ca50dd39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c8f245438c403c35e3ac6f49ca50dd39 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8f245438c403c35e3ac6f49ca50dd39, codeobj_c8f245438c403c35e3ac6f49ca50dd39, module_Crypto$Cipher$blockalgo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c8f245438c403c35e3ac6f49ca50dd39 = cache_frame_c8f245438c403c35e3ac6f49ca50dd39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8f245438c403c35e3ac6f49ca50dd39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8f245438c403c35e3ac6f49ca50dd39 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MODE_OPENPGP" );
            exception_tb = NULL;

            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                exception_tb = NULL;

                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_ciphertext );
            tmp_args_element_name_1 = par_ciphertext;
            frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 281;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_block_size );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_padding_length == NULL );
            var_padding_length = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_padding_length );
            tmp_compexpr_left_2 = var_padding_length;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_attribute_value_1;
                int tmp_truth_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__done_last_block );
                if ( tmp_attribute_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_1 );

                    exception_lineno = 285;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_1 );
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
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_source_name_6;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_ValueError );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ValueError" );
                        exception_tb = NULL;

                        exception_lineno = 286;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_2 = tmp_mvar_value_3;
                    tmp_args_element_name_2 = const_str_digest_7bd3bae3cf2f8bdf18efe0b093080597;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_6 = par_self;
                    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_block_size );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 287;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 286;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_raise_type_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 286;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 286;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_1;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_True );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "True" );
                    exception_tb = NULL;

                    exception_lineno = 288;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_1 = tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__done_last_block, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( par_ciphertext );
                tmp_left_name_4 = par_ciphertext;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_b );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
                    exception_tb = NULL;

                    exception_lineno = 289;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 289;
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_padding_length );
                tmp_right_name_5 = var_padding_length;
                tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_padded == NULL );
                var_padded = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_slice_upper_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__cipher );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_padded );
                tmp_args_element_name_4 = var_padded;
                frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 290;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decrypt, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_slice_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_len );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_slice_source_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "len" );
                    exception_tb = NULL;

                    exception_lineno = 290;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( par_ciphertext );
                tmp_args_element_name_5 = par_ciphertext;
                frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 290;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_slice_upper_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_slice_upper_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_slice_source_1 );

                    exception_lineno = 290;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
                Py_DECREF( tmp_slice_source_1 );
                Py_DECREF( tmp_slice_upper_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_3;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__cipher );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ciphertext );
                tmp_args_element_name_6 = par_ciphertext;
                frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 292;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decrypt, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 292;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_res == NULL );
                var_res = tmp_assign_source_4;
            }
            branch_end_2:;
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__cipher );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ciphertext );
        tmp_args_element_name_7 = par_ciphertext;
        frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_decrypt, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8f245438c403c35e3ac6f49ca50dd39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8f245438c403c35e3ac6f49ca50dd39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8f245438c403c35e3ac6f49ca50dd39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8f245438c403c35e3ac6f49ca50dd39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8f245438c403c35e3ac6f49ca50dd39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8f245438c403c35e3ac6f49ca50dd39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8f245438c403c35e3ac6f49ca50dd39,
        type_description_1,
        par_self,
        par_ciphertext,
        var_padding_length,
        var_padded,
        var_res
    );


    // Release cached frame.
    if ( frame_c8f245438c403c35e3ac6f49ca50dd39 == cache_frame_c8f245438c403c35e3ac6f49ca50dd39 )
    {
        Py_DECREF( frame_c8f245438c403c35e3ac6f49ca50dd39 );
    }
    cache_frame_c8f245438c403c35e3ac6f49ca50dd39 = NULL;

    assertFrameObject( frame_c8f245438c403c35e3ac6f49ca50dd39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_4_decrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphertext );
    Py_DECREF( par_ciphertext );
    par_ciphertext = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphertext );
    Py_DECREF( par_ciphertext );
    par_ciphertext = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo$$$function_4_decrypt );
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



static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_1__getParameter( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$blockalgo$$$function_1__getParameter,
        const_str_plain__getParameter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_88b8e81d9f453f9626654925f6a69140,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$blockalgo,
        const_str_digest_45a9ce3c33a14012415d7bae9663615f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$blockalgo$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6cc280c777eb9d301fcf9979e998b401,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$blockalgo,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_3_encrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$blockalgo$$$function_3_encrypt,
        const_str_plain_encrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0825c583851220c381c9a6267e1a1dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$blockalgo,
        const_str_digest_ce7882bafc945f73fd2d3cec13230179,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_4_decrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$blockalgo$$$function_4_decrypt,
        const_str_plain_decrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8f245438c403c35e3ac6f49ca50dd39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Crypto$Cipher$blockalgo,
        const_str_digest_6a6e7bcb97aa1da0c6798043f86c1d0b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Cipher$blockalgo =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Cipher.blockalgo",
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

MOD_INIT_DECL( Crypto$Cipher$blockalgo )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Cipher$blockalgo );
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
    puts("Crypto.Cipher.blockalgo: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Cipher.blockalgo: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Cipher.blockalgo: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Cipher$blockalgo" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Cipher$blockalgo = Py_InitModule4(
        "Crypto.Cipher.blockalgo",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Crypto$Cipher$blockalgo = PyModule_Create( &mdef_Crypto$Cipher$blockalgo );
#endif

    moduledict_Crypto$Cipher$blockalgo = MODULE_DICT( module_Crypto$Cipher$blockalgo );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Crypto$Cipher$blockalgo,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Crypto$Cipher$blockalgo,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher$blockalgo,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher$blockalgo,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Crypto$Cipher$blockalgo );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d2177928de453c31dedaf25e6c75a8bf, module_Crypto$Cipher$blockalgo );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ = NULL;
    PyObject *tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt = NULL;
    PyObject *tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt = NULL;
    struct Nuitka_FrameObject *frame_99426ec0051cc1889da54dae955ff9dd;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_37a50e8ec832bbdb6f308fbdfe7b4508;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_c36935a6e8aa2e6f0944330c100c4a48;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Cipher$blockalgo;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_99426ec0051cc1889da54dae955ff9dd = MAKE_MODULE_FRAME( codeobj_99426ec0051cc1889da54dae955ff9dd, module_Crypto$Cipher$blockalgo );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_99426ec0051cc1889da54dae955ff9dd );
    assert( Py_REFCNT( frame_99426ec0051cc1889da54dae955ff9dd ) == 2 );

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_sys );

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


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_star_imported_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            tmp_name_name_2 = const_str_digest_74ba315069266703540e145c62869e9e;
            tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Cipher$blockalgo;
            tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Cipher$blockalgo;
            tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
            frame_99426ec0051cc1889da54dae955ff9dd->m_frame.f_lineno = 26;
            tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
            if ( tmp_star_imported_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;

                goto frame_exception_exit_1;
            }
            tmp_result = IMPORT_MODULE_STAR( module_Crypto$Cipher$blockalgo, true, tmp_star_imported_1 );
            Py_DECREF( tmp_star_imported_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;

                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_digest_391b5dc084c9caede4445b681a10e649;
        tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Cipher$blockalgo;
        tmp_locals_name_3 = (PyObject *)moduledict_Crypto$Cipher$blockalgo;
        tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
        frame_99426ec0051cc1889da54dae955ff9dd->m_frame.f_lineno = 27;
        tmp_star_imported_2 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_star_imported_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_Crypto$Cipher$blockalgo, true, tmp_star_imported_2 );
        Py_DECREF( tmp_star_imported_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_ECB, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_CBC, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_CFB, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_PGP, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_OFB, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_CTR, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_7;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_None );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_None );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "None" );
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_defaults_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_1__getParameter( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain__getParameter, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_2___init__(  );



            assert( tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ == NULL );
            tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_3_encrypt(  );



            assert( tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt == NULL );
            tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Cipher$blockalgo$$$function_4_decrypt(  );



            assert( tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt == NULL );
            tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt = tmp_assign_source_15;
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
            tmp_dict_value_1 = const_str_digest_d2177928de453c31dedaf25e6c75a8bf;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_12 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_24f24f2cb3f34167a114646c5ab080ab;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ );
            tmp_dict_value_3 = tmp_locals_Crypto$Cipher$blockalgo_133_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt );
            tmp_dict_value_4 = tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt;
            tmp_dict_key_4 = const_str_plain_encrypt;
            tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt );
            tmp_dict_value_5 = tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt;
            tmp_dict_key_5 = const_str_plain_decrypt;
            tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ );
        Py_DECREF( tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ );
        tmp_locals_Crypto$Cipher$blockalgo_133_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt );
        Py_DECREF( tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt );
        tmp_locals_Crypto$Cipher$blockalgo_133_key_encrypt = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt );
        Py_DECREF( tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt );
        tmp_locals_Crypto$Cipher$blockalgo_133_key_decrypt = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 133;

            goto try_except_handler_2;
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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___metaclass__ );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                exception_tb = NULL;

                exception_lineno = 133;

                goto try_except_handler_3;
            }

            tmp_assign_source_16 = tmp_mvar_value_4;
            Py_INCREF( tmp_assign_source_16 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo );
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
        tmp_assign_source_16 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_16 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Crypto$Cipher$blockalgo );
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
        tmp_args_element_name_1 = const_str_plain_BlockAlgo;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_99426ec0051cc1889da54dae955ff9dd->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_17;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99426ec0051cc1889da54dae955ff9dd );
#endif
    popFrameStack();

    assertFrameObject( frame_99426ec0051cc1889da54dae955ff9dd );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99426ec0051cc1889da54dae955ff9dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99426ec0051cc1889da54dae955ff9dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99426ec0051cc1889da54dae955ff9dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99426ec0051cc1889da54dae955ff9dd, exception_lineno );
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
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain_BlockAlgo, tmp_assign_source_18 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$blockalgo, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Crypto$Cipher$blockalgo );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
