// STATUS: NOT STARTED

#include "frame-dwarf2.h"

enum dwarf_tag {
	DW_TAG_padding = 0,
	DW_TAG_array_type = 1,
	DW_TAG_class_type = 2,
	DW_TAG_entry_point = 3,
	DW_TAG_enumeration_type = 4,
	DW_TAG_formal_parameter = 5,
	DW_TAG_imported_declaration = 8,
	DW_TAG_label = 10,
	DW_TAG_lexical_block = 11,
	DW_TAG_member = 13,
	DW_TAG_pointer_type = 15,
	DW_TAG_reference_type = 16,
	DW_TAG_compile_unit = 17,
	DW_TAG_string_type = 18,
	DW_TAG_structure_type = 19,
	DW_TAG_subroutine_type = 21,
	DW_TAG_typedef = 22,
	DW_TAG_union_type = 23,
	DW_TAG_unspecified_parameters = 24,
	DW_TAG_variant = 25,
	DW_TAG_common_block = 26,
	DW_TAG_common_inclusion = 27,
	DW_TAG_inheritance = 28,
	DW_TAG_inlined_subroutine = 29,
	DW_TAG_module = 30,
	DW_TAG_ptr_to_member_type = 31,
	DW_TAG_set_type = 32,
	DW_TAG_subrange_type = 33,
	DW_TAG_with_stmt = 34,
	DW_TAG_access_declaration = 35,
	DW_TAG_base_type = 36,
	DW_TAG_catch_block = 37,
	DW_TAG_const_type = 38,
	DW_TAG_constant = 39,
	DW_TAG_enumerator = 40,
	DW_TAG_file_type = 41,
	DW_TAG_friend = 42,
	DW_TAG_namelist = 43,
	DW_TAG_namelist_item = 44,
	DW_TAG_packed_type = 45,
	DW_TAG_subprogram = 46,
	DW_TAG_template_type_param = 47,
	DW_TAG_template_value_param = 48,
	DW_TAG_thrown_type = 49,
	DW_TAG_try_block = 50,
	DW_TAG_variant_part = 51,
	DW_TAG_variable = 52,
	DW_TAG_volatile_type = 53,
	DW_TAG_MIPS_loop = 16513,
	DW_TAG_format_label = 16641,
	DW_TAG_function_template = 16642,
	DW_TAG_class_template = 16643
};

enum dwarf_form {
	DW_FORM_addr = 1,
	DW_FORM_block2 = 3,
	DW_FORM_block4 = 4,
	DW_FORM_data2 = 5,
	DW_FORM_data4 = 6,
	DW_FORM_data8 = 7,
	DW_FORM_string = 8,
	DW_FORM_block = 9,
	DW_FORM_block1 = 10,
	DW_FORM_data1 = 11,
	DW_FORM_flag = 12,
	DW_FORM_sdata = 13,
	DW_FORM_strp = 14,
	DW_FORM_udata = 15,
	DW_FORM_ref_addr = 16,
	DW_FORM_ref1 = 17,
	DW_FORM_ref2 = 18,
	DW_FORM_ref4 = 19,
	DW_FORM_ref8 = 20,
	DW_FORM_ref_udata = 21,
	DW_FORM_indirect = 22
};

enum dwarf_attribute {
	DW_AT_sibling = 1,
	DW_AT_location = 2,
	DW_AT_name = 3,
	DW_AT_ordering = 9,
	DW_AT_subscr_data = 10,
	DW_AT_byte_size = 11,
	DW_AT_bit_offset = 12,
	DW_AT_bit_size = 13,
	DW_AT_element_list = 15,
	DW_AT_stmt_list = 16,
	DW_AT_low_pc = 17,
	DW_AT_high_pc = 18,
	DW_AT_language = 19,
	DW_AT_member = 20,
	DW_AT_discr = 21,
	DW_AT_discr_value = 22,
	DW_AT_visibility = 23,
	DW_AT_import = 24,
	DW_AT_string_length = 25,
	DW_AT_common_reference = 26,
	DW_AT_comp_dir = 27,
	DW_AT_const_value = 28,
	DW_AT_containing_type = 29,
	DW_AT_default_value = 30,
	DW_AT_inline = 32,
	DW_AT_is_optional = 33,
	DW_AT_lower_bound = 34,
	DW_AT_producer = 37,
	DW_AT_prototyped = 39,
	DW_AT_return_addr = 42,
	DW_AT_start_scope = 44,
	DW_AT_stride_size = 46,
	DW_AT_upper_bound = 47,
	DW_AT_abstract_origin = 49,
	DW_AT_accessibility = 50,
	DW_AT_address_class = 51,
	DW_AT_artificial = 52,
	DW_AT_base_types = 53,
	DW_AT_calling_convention = 54,
	DW_AT_count = 55,
	DW_AT_data_member_location = 56,
	DW_AT_decl_column = 57,
	DW_AT_decl_file = 58,
	DW_AT_decl_line = 59,
	DW_AT_declaration = 60,
	DW_AT_discr_list = 61,
	DW_AT_encoding = 62,
	DW_AT_external = 63,
	DW_AT_frame_base = 64,
	DW_AT_friend = 65,
	DW_AT_identifier_case = 66,
	DW_AT_macro_info = 67,
	DW_AT_namelist_items = 68,
	DW_AT_priority = 69,
	DW_AT_segment = 70,
	DW_AT_specification = 71,
	DW_AT_static_link = 72,
	DW_AT_type = 73,
	DW_AT_use_location = 74,
	DW_AT_variable_parameter = 75,
	DW_AT_virtuality = 76,
	DW_AT_vtable_elem_location = 77,
	DW_AT_MIPS_fde = 8193,
	DW_AT_MIPS_loop_begin = 8194,
	DW_AT_MIPS_tail_loop_begin = 8195,
	DW_AT_MIPS_epilog_begin = 8196,
	DW_AT_MIPS_loop_unroll_factor = 8197,
	DW_AT_MIPS_software_pipeline_depth = 8198,
	DW_AT_MIPS_linkage_name = 8199,
	DW_AT_MIPS_stride = 8200,
	DW_AT_MIPS_abstract_name = 8201,
	DW_AT_MIPS_clone_origin = 8202,
	DW_AT_MIPS_has_inlines = 8203,
	DW_AT_sf_names = 8449,
	DW_AT_src_info = 8450,
	DW_AT_mac_info = 8451,
	DW_AT_src_coords = 8452,
	DW_AT_body_begin = 8453,
	DW_AT_body_end = 8454
};

enum dwarf_location_atom {
	DW_OP_addr = 3,
	DW_OP_deref = 6,
	DW_OP_const1u = 8,
	DW_OP_const1s = 9,
	DW_OP_const2u = 10,
	DW_OP_const2s = 11,
	DW_OP_const4u = 12,
	DW_OP_const4s = 13,
	DW_OP_const8u = 14,
	DW_OP_const8s = 15,
	DW_OP_constu = 16,
	DW_OP_consts = 17,
	DW_OP_dup = 18,
	DW_OP_drop = 19,
	DW_OP_over = 20,
	DW_OP_pick = 21,
	DW_OP_swap = 22,
	DW_OP_rot = 23,
	DW_OP_xderef = 24,
	DW_OP_abs = 25,
	DW_OP_and = 26,
	DW_OP_div = 27,
	DW_OP_minus = 28,
	DW_OP_mod = 29,
	DW_OP_mul = 30,
	DW_OP_neg = 31,
	DW_OP_not = 32,
	DW_OP_or = 33,
	DW_OP_plus = 34,
	DW_OP_plus_uconst = 35,
	DW_OP_shl = 36,
	DW_OP_shr = 37,
	DW_OP_shra = 38,
	DW_OP_xor = 39,
	DW_OP_bra = 40,
	DW_OP_eq = 41,
	DW_OP_ge = 42,
	DW_OP_gt = 43,
	DW_OP_le = 44,
	DW_OP_lt = 45,
	DW_OP_ne = 46,
	DW_OP_skip = 47,
	DW_OP_lit0 = 48,
	DW_OP_lit1 = 49,
	DW_OP_lit2 = 50,
	DW_OP_lit3 = 51,
	DW_OP_lit4 = 52,
	DW_OP_lit5 = 53,
	DW_OP_lit6 = 54,
	DW_OP_lit7 = 55,
	DW_OP_lit8 = 56,
	DW_OP_lit9 = 57,
	DW_OP_lit10 = 58,
	DW_OP_lit11 = 59,
	DW_OP_lit12 = 60,
	DW_OP_lit13 = 61,
	DW_OP_lit14 = 62,
	DW_OP_lit15 = 63,
	DW_OP_lit16 = 64,
	DW_OP_lit17 = 65,
	DW_OP_lit18 = 66,
	DW_OP_lit19 = 67,
	DW_OP_lit20 = 68,
	DW_OP_lit21 = 69,
	DW_OP_lit22 = 70,
	DW_OP_lit23 = 71,
	DW_OP_lit24 = 72,
	DW_OP_lit25 = 73,
	DW_OP_lit26 = 74,
	DW_OP_lit27 = 75,
	DW_OP_lit28 = 76,
	DW_OP_lit29 = 77,
	DW_OP_lit30 = 78,
	DW_OP_lit31 = 79,
	DW_OP_reg0 = 80,
	DW_OP_reg1 = 81,
	DW_OP_reg2 = 82,
	DW_OP_reg3 = 83,
	DW_OP_reg4 = 84,
	DW_OP_reg5 = 85,
	DW_OP_reg6 = 86,
	DW_OP_reg7 = 87,
	DW_OP_reg8 = 88,
	DW_OP_reg9 = 89,
	DW_OP_reg10 = 90,
	DW_OP_reg11 = 91,
	DW_OP_reg12 = 92,
	DW_OP_reg13 = 93,
	DW_OP_reg14 = 94,
	DW_OP_reg15 = 95,
	DW_OP_reg16 = 96,
	DW_OP_reg17 = 97,
	DW_OP_reg18 = 98,
	DW_OP_reg19 = 99,
	DW_OP_reg20 = 100,
	DW_OP_reg21 = 101,
	DW_OP_reg22 = 102,
	DW_OP_reg23 = 103,
	DW_OP_reg24 = 104,
	DW_OP_reg25 = 105,
	DW_OP_reg26 = 106,
	DW_OP_reg27 = 107,
	DW_OP_reg28 = 108,
	DW_OP_reg29 = 109,
	DW_OP_reg30 = 110,
	DW_OP_reg31 = 111,
	DW_OP_breg0 = 112,
	DW_OP_breg1 = 113,
	DW_OP_breg2 = 114,
	DW_OP_breg3 = 115,
	DW_OP_breg4 = 116,
	DW_OP_breg5 = 117,
	DW_OP_breg6 = 118,
	DW_OP_breg7 = 119,
	DW_OP_breg8 = 120,
	DW_OP_breg9 = 121,
	DW_OP_breg10 = 122,
	DW_OP_breg11 = 123,
	DW_OP_breg12 = 124,
	DW_OP_breg13 = 125,
	DW_OP_breg14 = 126,
	DW_OP_breg15 = 127,
	DW_OP_breg16 = 128,
	DW_OP_breg17 = 129,
	DW_OP_breg18 = 130,
	DW_OP_breg19 = 131,
	DW_OP_breg20 = 132,
	DW_OP_breg21 = 133,
	DW_OP_breg22 = 134,
	DW_OP_breg23 = 135,
	DW_OP_breg24 = 136,
	DW_OP_breg25 = 137,
	DW_OP_breg26 = 138,
	DW_OP_breg27 = 139,
	DW_OP_breg28 = 140,
	DW_OP_breg29 = 141,
	DW_OP_breg30 = 142,
	DW_OP_breg31 = 143,
	DW_OP_regx = 144,
	DW_OP_fbreg = 145,
	DW_OP_bregx = 146,
	DW_OP_piece = 147,
	DW_OP_deref_size = 148,
	DW_OP_xderef_size = 149,
	DW_OP_nop = 150
};

enum dwarf_type {
	DW_ATE_void = 0,
	DW_ATE_address = 1,
	DW_ATE_boolean = 2,
	DW_ATE_complex_float = 3,
	DW_ATE_float = 4,
	DW_ATE_signed = 5,
	DW_ATE_signed_char = 6,
	DW_ATE_unsigned = 7,
	DW_ATE_unsigned_char = 8
};

enum dwarf_array_dim_ordering {
	DW_ORD_row_major = 0,
	DW_ORD_col_major = 1
};

enum dwarf_access_attribute {
	DW_ACCESS_public = 1,
	DW_ACCESS_protected = 2,
	DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute {
	DW_VIS_local = 1,
	DW_VIS_exported = 2,
	DW_VIS_qualified = 3
};

enum dwarf_virtuality_attribute {
	DW_VIRTUALITY_none = 0,
	DW_VIRTUALITY_virtual = 1,
	DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
	DW_ID_case_sensitive = 0,
	DW_ID_up_case = 1,
	DW_ID_down_case = 2,
	DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention {
	DW_CC_normal = 1,
	DW_CC_program = 2,
	DW_CC_nocall = 3
};

enum dwarf_inline_attribute {
	DW_INL_not_inlined = 0,
	DW_INL_inlined = 1,
	DW_INL_declared_not_inlined = 2,
	DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list {
	DW_DSC_label = 0,
	DW_DSC_range = 1
};

enum dwarf_line_number_ops {
	DW_LNS_extended_op = 0,
	DW_LNS_copy = 1,
	DW_LNS_advance_pc = 2,
	DW_LNS_advance_line = 3,
	DW_LNS_set_file = 4,
	DW_LNS_set_column = 5,
	DW_LNS_negate_stmt = 6,
	DW_LNS_set_basic_block = 7,
	DW_LNS_const_add_pc = 8,
	DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
	DW_LNE_end_sequence = 1,
	DW_LNE_set_address = 2,
	DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
	DW_CFA_advance_loc = 64,
	DW_CFA_offset = 128,
	DW_CFA_restore = 192,
	DW_CFA_nop = 0,
	DW_CFA_set_loc = 1,
	DW_CFA_advance_loc1 = 2,
	DW_CFA_advance_loc2 = 3,
	DW_CFA_advance_loc4 = 4,
	DW_CFA_offset_extended = 5,
	DW_CFA_restore_extended = 6,
	DW_CFA_undefined = 7,
	DW_CFA_same_value = 8,
	DW_CFA_register = 9,
	DW_CFA_remember_state = 10,
	DW_CFA_restore_state = 11,
	DW_CFA_def_cfa = 12,
	DW_CFA_def_cfa_register = 13,
	DW_CFA_def_cfa_offset = 14,
	DW_CFA_def_cfa_expression = 15,
	DW_CFA_expression = 16,
	DW_CFA_MIPS_advance_loc8 = 29,
	DW_CFA_GNU_window_save = 45,
	DW_CFA_GNU_args_size = 46,
	DW_CFA_GNU_negative_offset_extended = 47
};

enum dwarf_source_language {
	DW_LANG_C89 = 1,
	DW_LANG_C = 2,
	DW_LANG_Ada83 = 3,
	DW_LANG_C_plus_plus = 4,
	DW_LANG_Cobol74 = 5,
	DW_LANG_Cobol85 = 6,
	DW_LANG_Fortran77 = 7,
	DW_LANG_Fortran90 = 8,
	DW_LANG_Pascal83 = 9,
	DW_LANG_Modula2 = 10,
	DW_LANG_Java = 11,
	DW_LANG_Mips_Assembler = 32769
};

enum dwarf_macinfo_record_type {
	DW_MACINFO_define = 1,
	DW_MACINFO_undef = 2,
	DW_MACINFO_start_file = 3,
	DW_MACINFO_end_file = 4,
	DW_MACINFO_vendor_ext = 255
};

typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
typedef int saddr;
typedef unsigned char ubyte;

struct dwarf_cie {
	uword length;
	sword CIE_id;
	ubyte version;
	char augmentation[0];
};

struct dwarf_fde {
	uword length;
	sword CIE_delta;
	void *pc_begin;
	uaddr pc_range;
};

typedef dwarf_fde fde;

struct cie_info {
	char *augmentation;
	void *eh_ptr;
	int code_align;
	int data_align;
	unsigned int ra_regno;
};

struct frame_state_internal {
	frame_state s;
	frame_state_internal *saved_state;
};

union unaligned {
	void *p;
	short unsigned int b2;
	unsigned int b4;
	long unsigned int b8;
};

struct fde_vector {
	fde **array;
	size_t count;
};

struct fde_accumulator {
	fde_vector linear;
	fde_vector erratic;
};

static __gthread_mutex_t object_mutex = 0;
void *key_value[256];
static object *objects;

static void* decode_uleb128(unsigned char *buf, unsigned int *r) {
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *buf;
  pbVar2 = buf + 1;
  uVar4 = 0;
  uVar3 = bVar1 & 0x7f;
  while ((bVar1 & 0x80) != 0) {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (uVar4 & 0x1f);
  }
  *r = uVar3;
  return pbVar2;
}

static void* decode_sleb128(unsigned char *buf, int *r) {
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *buf;
    buf = buf + 1;
    uVar2 = uVar3 & 0x1f;
    uVar3 = uVar3 + 7;
    uVar4 = uVar4 | (bVar1 & 0x7f) << uVar2;
  } while ((bVar1 & 0x80) != 0);
  if (uVar3 < 0x20) {
    if ((bVar1 & 0x40) == 0) {
      *r = uVar4;
    }
    else {
      *r = uVar4 | -1 << (uVar3 & 0x1f);
    }
  }
  else {
    *r = uVar4;
  }
  return buf;
}

static void fde_merge(fde_vector *v1, fde_vector *v2) {
  uint uVar1;
  uint uVar2;
  dwarf_fde **ppdVar3;
  dwarf_fde *pdVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  dwarf_fde **ppdVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  dwarf_fde **ppdVar14;
  uint uVar15;
  
  uVar1 = v2->count;
  if (uVar1 != 0) {
    uVar2 = v1->count;
    ppdVar3 = v1->array;
    iVar6 = uVar2 * 4;
    ppdVar9 = v2->array + uVar1;
    ppdVar14 = ppdVar3 + (uVar2 - 1);
    uVar15 = uVar1;
    uVar13 = uVar2;
    do {
      ppdVar9 = ppdVar9 + -1;
      uVar15 = uVar15 - 1;
      pdVar4 = *ppdVar9;
      if ((uVar13 != 0) && (pvVar5 = pdVar4->pc_begin, 0 < (int)(*ppdVar14)->pc_begin - (int)pvVar5)
         ) {
        iVar12 = iVar6 + uVar15 * 4;
        puVar11 = (undefined4 *)((int)ppdVar3 + iVar6 + -4);
        uVar8 = *puVar11;
        iVar10 = iVar6;
        while( true ) {
          puVar11 = puVar11 + -1;
          puVar7 = (undefined4 *)(iVar12 + (int)ppdVar3);
          iVar12 = iVar12 + -4;
          uVar13 = uVar13 - 1;
          *puVar7 = uVar8;
          ppdVar14 = ppdVar14 + -1;
          iVar6 = iVar6 + -4;
          if ((uVar13 == 0) ||
             (*(int *)(*(int *)((int)ppdVar3 + iVar10 + -8) + 8) - (int)pvVar5 < 1)) break;
          uVar8 = *puVar11;
          iVar10 = iVar10 + -4;
        }
      }
      ppdVar3[uVar13 + uVar15] = pdVar4;
    } while (uVar15 != 0);
    v1->count = uVar2 + uVar1;
  }
  return;
}

static fde** end_fde_sort(fde_accumulator *accu, size_t count) {
  dwarf_fde *pdVar1;
  void *pvVar2;
  dwarf_fde *pdVar3;
  int **ppiVar4;
  uint uVar5;
  dwarf_fde **ppdVar6;
  dwarf_fde **ppdVar7;
  dwarf_fde **ppdVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  fde_vector *v2;
  dwarf_fde **ppdVar15;
  
  ppdVar15 = (accu->linear).array;
  if (ppdVar15 == (dwarf_fde **)0x0) {
    uVar5 = (accu->linear).count;
    ppdVar7 = (accu->erratic).array;
  }
  else {
    uVar5 = (accu->linear).count;
    if (uVar5 != count) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    ppdVar7 = (accu->erratic).array;
  }
  if (ppdVar7 == (dwarf_fde **)0x0) {
    uVar13 = uVar5;
    if (uVar5 != 0) {
LAB_0029f238:
      uVar13 = uVar13 - 1;
      uVar11 = uVar13;
LAB_0029f2e4:
      do {
        iVar12 = uVar11 * 2;
        if (uVar5 <= iVar12 + 1U) goto LAB_0029f2f4;
        if (iVar12 + 2U < uVar5) {
          iVar10 = uVar11 * 8;
          pdVar1 = ppdVar15[uVar11 * 2 + 2];
          pvVar2 = pdVar1->pc_begin;
          if (0 < (int)pvVar2 - (int)ppdVar15[uVar11 * 2 + 1]->pc_begin) {
            pdVar3 = ppdVar15[uVar11];
            if (0 < (int)pvVar2 - (int)pdVar3->pc_begin) {
              ppdVar15[uVar11] = pdVar1;
              ppdVar15[uVar11 * 2 + 2] = pdVar3;
              uVar11 = iVar12 + 2U;
              goto LAB_0029f2e4;
            }
          }
        }
        else {
          iVar10 = uVar11 << 3;
        }
        ppdVar7 = (dwarf_fde **)((int)ppdVar15 + iVar10 + 4);
        pdVar1 = ppdVar15[uVar11];
        pdVar3 = *ppdVar7;
        if ((int)pdVar3->pc_begin - (int)pdVar1->pc_begin < 1) goto LAB_0029f2f4;
        ppdVar15[uVar11] = pdVar3;
        *ppdVar7 = pdVar1;
        uVar11 = iVar12 + 1;
      } while( true );
    }
LAB_0029f2fc:
    if (1 < uVar5) {
      ppdVar7 = ppdVar15 + uVar5;
      do {
        ppdVar7 = ppdVar7 + -1;
        uVar5 = uVar5 - 1;
        pdVar1 = *ppdVar15;
        *ppdVar15 = *ppdVar7;
        *ppdVar7 = pdVar1;
        uVar13 = 0;
        if (1 < uVar5) {
          iVar12 = 0;
          uVar11 = 2;
          do {
            if (uVar11 < uVar5) {
              iVar10 = uVar13 * 8;
              pdVar1 = ppdVar15[uVar13 * 2 + 2];
              pvVar2 = pdVar1->pc_begin;
              if ((int)pvVar2 - (int)ppdVar15[uVar13 * 2 + 1]->pc_begin < 1) goto LAB_0029f3a8;
              pdVar3 = ppdVar15[uVar13];
              if ((int)pvVar2 - (int)pdVar3->pc_begin < 1) goto LAB_0029f3a8;
              ppdVar15[uVar13] = pdVar1;
              ppdVar15[uVar13 * 2 + 2] = pdVar3;
              uVar13 = uVar11;
            }
            else {
              iVar10 = uVar13 << 3;
LAB_0029f3a8:
              ppdVar8 = (dwarf_fde **)((int)ppdVar15 + iVar10 + 4);
              pdVar1 = ppdVar15[uVar13];
              pdVar3 = *ppdVar8;
              if ((int)pdVar3->pc_begin - (int)pdVar1->pc_begin < 1) break;
              ppdVar15[uVar13] = pdVar3;
              *ppdVar8 = pdVar1;
              uVar13 = iVar12 + 1;
            }
            iVar12 = uVar13 * 2;
            uVar11 = iVar12 + 2;
          } while (iVar12 + 1U < uVar5);
        }
      } while (1 < uVar5);
    }
  }
  else {
    v2 = &accu->erratic;
    piVar9 = &marker_0;
    uVar13 = 0;
    if (uVar5 != 0) {
      ppdVar7 = v2->array;
      iVar12 = 0;
      do {
        if ((piVar9 != &marker_0) &&
           (*(int *)(*(int *)(iVar12 + (int)ppdVar15) + 8) - *(int *)(*piVar9 + 8) < 0)) {
          iVar10 = (int)piVar9 - (int)ppdVar15;
          do {
            ppiVar4 = (int **)((int)ppdVar7 + iVar10);
            piVar9 = *ppiVar4;
            *ppiVar4 = (int *)0x0;
            if (piVar9 == &marker_0) break;
            iVar10 = (int)piVar9 - (int)ppdVar15;
          } while (*(int *)(*(int *)(iVar12 + (int)ppdVar15) + 8) - *(int *)(*piVar9 + 8) < 0);
        }
        uVar13 = uVar13 + 1;
        *(int **)(iVar12 + (int)ppdVar7) = piVar9;
        piVar9 = (int *)((int)ppdVar15 + iVar12);
        iVar12 = iVar12 + 4;
      } while (uVar13 < uVar5);
    }
    uVar11 = 0;
    uVar14 = 0;
    uVar13 = 0;
    if (uVar5 != 0) {
      ppdVar7 = v2->array;
      ppdVar8 = ppdVar15;
      ppdVar6 = ppdVar7;
      do {
        pdVar1 = *ppdVar6;
        ppdVar6 = ppdVar6 + 1;
        if (pdVar1 == (dwarf_fde *)0x0) {
          uVar13 = uVar13 + 1;
          *ppdVar7 = *ppdVar15;
          ppdVar7 = ppdVar7 + 1;
        }
        else {
          uVar11 = uVar11 + 1;
          *ppdVar8 = *ppdVar15;
          ppdVar8 = ppdVar8 + 1;
        }
        uVar14 = uVar14 + 1;
        ppdVar15 = ppdVar15 + 1;
      } while (uVar14 < uVar5);
    }
    (accu->linear).count = uVar11;
    (accu->erratic).count = uVar13;
    if ((accu->linear).count + (accu->erratic).count != count) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    ppdVar15 = v2->array;
    uVar5 = uVar13;
    if (uVar13 != 0) {
LAB_0029f048:
      uVar5 = uVar5 - 1;
      uVar11 = uVar5;
LAB_0029f0f4:
      do {
        iVar12 = uVar11 * 2;
        if (uVar13 <= iVar12 + 1U) goto LAB_0029f104;
        if (iVar12 + 2U < uVar13) {
          iVar10 = uVar11 * 8;
          pdVar1 = ppdVar15[uVar11 * 2 + 2];
          pvVar2 = pdVar1->pc_begin;
          if (0 < (int)pvVar2 - (int)ppdVar15[uVar11 * 2 + 1]->pc_begin) {
            pdVar3 = ppdVar15[uVar11];
            if (0 < (int)pvVar2 - (int)pdVar3->pc_begin) {
              ppdVar15[uVar11] = pdVar1;
              ppdVar15[uVar11 * 2 + 2] = pdVar3;
              uVar11 = iVar12 + 2U;
              goto LAB_0029f0f4;
            }
          }
        }
        else {
          iVar10 = uVar11 << 3;
        }
        ppdVar7 = (dwarf_fde **)((int)ppdVar15 + iVar10 + 4);
        pdVar1 = ppdVar15[uVar11];
        pdVar3 = *ppdVar7;
        if ((int)pdVar3->pc_begin - (int)pdVar1->pc_begin < 1) goto LAB_0029f104;
        ppdVar15[uVar11] = pdVar3;
        *ppdVar7 = pdVar1;
        uVar11 = iVar12 + 1;
      } while( true );
    }
LAB_0029f10c:
    if (1 < uVar13) {
      ppdVar7 = ppdVar15 + uVar13;
      do {
        ppdVar7 = ppdVar7 + -1;
        uVar13 = uVar13 - 1;
        pdVar1 = *ppdVar15;
        *ppdVar15 = *ppdVar7;
        *ppdVar7 = pdVar1;
        uVar5 = 0;
        if (1 < uVar13) {
          iVar12 = 0;
          uVar11 = 2;
          do {
            if (uVar11 < uVar13) {
              iVar10 = uVar5 * 8;
              pdVar1 = ppdVar15[uVar5 * 2 + 2];
              pvVar2 = pdVar1->pc_begin;
              if ((int)pvVar2 - (int)ppdVar15[uVar5 * 2 + 1]->pc_begin < 1) goto LAB_0029f1b8;
              pdVar3 = ppdVar15[uVar5];
              if ((int)pvVar2 - (int)pdVar3->pc_begin < 1) goto LAB_0029f1b8;
              ppdVar15[uVar5] = pdVar1;
              ppdVar15[uVar5 * 2 + 2] = pdVar3;
              uVar5 = uVar11;
            }
            else {
              iVar10 = uVar5 << 3;
LAB_0029f1b8:
              ppdVar8 = (dwarf_fde **)((int)ppdVar15 + iVar10 + 4);
              pdVar1 = ppdVar15[uVar5];
              pdVar3 = *ppdVar8;
              if ((int)pdVar3->pc_begin - (int)pdVar1->pc_begin < 1) break;
              ppdVar15[uVar5] = pdVar3;
              *ppdVar8 = pdVar1;
              uVar5 = iVar12 + 1;
            }
            iVar12 = uVar5 * 2;
            uVar11 = iVar12 + 2;
          } while (iVar12 + 1U < uVar13);
        }
      } while (1 < uVar13);
    }
    fde_merge(&accu->linear,v2);
    free(v2->array);
    ppdVar15 = (accu->linear).array;
  }
  return ppdVar15;
LAB_0029f2f4:
  if (uVar13 == 0) goto LAB_0029f2fc;
  goto LAB_0029f238;
LAB_0029f104:
  if (uVar5 == 0) goto LAB_0029f10c;
  goto LAB_0029f048;
}

void __register_frame_info(void *begin, object *ob) {
  int iVar1;
  
  ob->fde_begin = (dwarf_fde *)begin;
  ob->pc_end = (void *)0x0;
  ob->pc_begin = (void *)0x0;
  ob->fde_array = (dwarf_fde **)0x0;
  ob->count = 0;
  WaitSema(__sce_eh_sema_id);
  iVar1 = __sce_eh_sema_id;
  ob->next = objects;
  objects = ob;
  SignalSema(iVar1);
  return;
}

void __register_frame(void *begin) {
  object *ob;
  
  ob = (object *)malloc(0x18);
  __register_frame_info(begin,ob);
  return;
}

void __register_frame_info_table(void *begin, object *ob) {
  int iVar1;
  
  ob->fde_array = (dwarf_fde **)begin;
  ob->fde_begin = (dwarf_fde *)begin;
  ob->pc_end = (void *)0x0;
  ob->pc_begin = (void *)0x0;
  ob->count = 0;
  WaitSema(__sce_eh_sema_id);
  iVar1 = __sce_eh_sema_id;
  ob->next = objects;
  objects = ob;
  SignalSema(iVar1);
  return;
}

void __register_frame_table(void *begin) {
  object *ob;
  
  ob = (object *)malloc(0x18);
  __register_frame_info_table(begin,ob);
  return;
}

void* __deregister_frame_info(void *begin) {
  dwarf_fde **aptr;
  object *poVar1;
  object **ppoVar2;
  
  WaitSema(__sce_eh_sema_id);
  ppoVar2 = &objects;
  poVar1 = objects;
  while( true ) {
    if (poVar1 == (object *)0x0) {
      SignalSema(__sce_eh_sema_id);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (poVar1->fde_begin == (dwarf_fde *)begin) break;
    ppoVar2 = &poVar1->next;
    poVar1 = *ppoVar2;
  }
  aptr = poVar1->fde_array;
  *ppoVar2 = poVar1->next;
  if ((aptr != (dwarf_fde **)0x0) && (aptr != (dwarf_fde **)begin)) {
    free(aptr);
  }
  SignalSema(__sce_eh_sema_id);
  return poVar1;
}

void __deregister_frame(void *begin) {
  void *aptr;
  
  aptr = __deregister_frame_info(begin);
  free(aptr);
  return;
}

static size_t count_fdes(fde *this_fde) {
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = this_fde->length;
  while (uVar1 != 0) {
    if ((this_fde->CIE_delta != 0) && (this_fde->pc_begin != (void *)0x0)) {
      uVar2 = uVar2 + 1;
    }
    this_fde = (dwarf_fde *)((int)&this_fde->CIE_delta + uVar1);
    uVar1 = this_fde->length;
  }
  return uVar2;
}

static void add_fdes(fde *this_fde, fde_accumulator *accu, void **beg_ptr, void **end_ptr) {
  void *pvVar1;
  dwarf_fde **ppdVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  uint *puVar7;
  
  uVar4 = this_fde->length;
  pvVar5 = *beg_ptr;
  pvVar6 = *end_ptr;
  if (uVar4 != 0) {
    puVar7 = &(accu->linear).count;
    do {
      if (this_fde->CIE_delta != 0) {
        pvVar1 = this_fde->pc_begin;
        if (pvVar1 != (void *)0x0) {
          ppdVar2 = (accu->linear).array;
          if (ppdVar2 == (dwarf_fde **)0x0) {
            uVar3 = this_fde->pc_range;
          }
          else {
            uVar4 = *puVar7;
            *puVar7 = uVar4 + 1;
            ppdVar2[uVar4] = this_fde;
            uVar4 = this_fde->length;
            uVar3 = this_fde->pc_range;
          }
          if (pvVar1 < pvVar5) {
            pvVar5 = pvVar1;
          }
          if (pvVar6 < (void *)((int)pvVar1 + uVar3)) {
            pvVar6 = (void *)((int)pvVar1 + uVar3);
          }
        }
      }
      this_fde = (dwarf_fde *)((int)&this_fde->CIE_delta + uVar4);
      uVar4 = this_fde->length;
    } while (uVar4 != 0);
  }
  *beg_ptr = pvVar5;
  *end_ptr = pvVar6;
  return;
}

static fde* search_fdes(fde *this_fde, void *pc) {
  uint uVar1;
  
  uVar1 = this_fde->length;
  while( true ) {
    if (uVar1 == 0) {
      return (dwarf_fde *)0x0;
    }
    if (((this_fde->CIE_delta != 0) && (this_fde->pc_begin != (void *)0x0)) &&
       ((uint)((int)pc - (int)this_fde->pc_begin) < this_fde->pc_range)) break;
    this_fde = (dwarf_fde *)((int)&this_fde->CIE_delta + uVar1);
    uVar1 = this_fde->length;
  }
  return this_fde;
}

static void frame_init(object *ob) {
  uint uVar1;
  dwarf_fde **ppdVar2;
  dwarf_fde *pdVar3;
  uint count;
  fde_accumulator local_40;
  undefined *local_30;
  void *local_2c [3];
  
  if (ob->pc_begin == (void *)0x0) {
    ppdVar2 = ob->fde_array;
    if (ppdVar2 == (dwarf_fde **)0x0) {
      count = count_fdes(ob->fde_begin);
    }
    else {
      pdVar3 = *ppdVar2;
      count = 0;
      if (pdVar3 != (dwarf_fde *)0x0) {
        do {
          ppdVar2 = ppdVar2 + 1;
          uVar1 = count_fdes(pdVar3);
          pdVar3 = *ppdVar2;
          count = count + uVar1;
        } while (pdVar3 != (dwarf_fde *)0x0);
        ob->count = count;
        goto LAB_0029f7d0;
      }
    }
  }
  else {
    count = ob->count;
  }
  ob->count = count;
LAB_0029f7d0:
  if (count == 0) {
    local_40.linear.array = (dwarf_fde **)0x0;
  }
  else {
    local_40.linear.array = (dwarf_fde **)malloc(count << 2);
  }
  local_40.erratic.array = (dwarf_fde **)0x0;
  if (local_40.linear.array != (dwarf_fde **)0x0) {
    local_40.erratic.array = (dwarf_fde **)malloc(count << 2);
  }
  local_40.linear.count = 0;
  local_40.erratic.count = 0;
  if ((local_40.linear.array != (dwarf_fde **)0x0) || (ob->pc_begin == (void *)0x0)) {
    ppdVar2 = ob->fde_array;
    local_30 = &_heap_size;
    local_2c[0] = (void *)0x0;
    if (ppdVar2 == (dwarf_fde **)0x0) {
      add_fdes(ob->fde_begin,&local_40,&local_30,local_2c);
    }
    else {
      pdVar3 = *ppdVar2;
      while (pdVar3 != (dwarf_fde *)0x0) {
        ppdVar2 = ppdVar2 + 1;
        add_fdes(pdVar3,&local_40,&local_30,local_2c);
        pdVar3 = *ppdVar2;
      }
    }
    ppdVar2 = end_fde_sort(&local_40,count);
    if (ppdVar2 != (dwarf_fde **)0x0) {
      ob->fde_array = ppdVar2;
    }
    ob->pc_begin = local_30;
    ob->pc_end = local_2c[0];
  }
  return;
}

static fde* find_fde(void *pc) {
  void *pvVar1;
  dwarf_fde *pdVar2;
  dwarf_fde *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  object *ob;
  dwarf_fde *pdVar7;
  
  WaitSema(__sce_eh_sema_id);
  ob = objects;
  while( true ) {
    while( true ) {
      if (ob == (object *)0x0) {
        SignalSema(__sce_eh_sema_id);
        return (dwarf_fde *)0x0;
      }
      pvVar1 = ob->pc_begin;
      if (pvVar1 == (void *)0x0) {
        frame_init(ob);
        pvVar1 = ob->pc_begin;
      }
      if (pvVar1 <= pc) break;
      ob = ob->next;
    }
    if (pc < ob->pc_end) break;
    ob = ob->next;
  }
  pdVar7 = (dwarf_fde *)ob->fde_array;
  if ((pdVar7 == (dwarf_fde *)0x0) || (pdVar3 = ob->fde_begin, pdVar7 == pdVar3)) {
    frame_init(ob);
    pdVar7 = (dwarf_fde *)ob->fde_array;
    pdVar3 = ob->fde_begin;
  }
  if (pdVar7 != (dwarf_fde *)0x0) {
    if (pdVar7 != pdVar3) {
      SignalSema(__sce_eh_sema_id);
      uVar5 = ob->count;
      uVar6 = 0;
      if (uVar5 == 0) {
        return (dwarf_fde *)0x0;
      }
      uVar4 = uVar5;
      while( true ) {
        uVar4 = uVar4 >> 1;
        pdVar7 = ob->fde_array[uVar4];
        if ((pdVar7->pc_begin <= pc) &&
           (uVar6 = uVar4 + 1, uVar4 = uVar5,
           pc < (void *)((int)pdVar7->pc_begin + pdVar7->pc_range))) break;
        uVar5 = uVar4;
        if (uVar5 <= uVar6) {
          return (dwarf_fde *)0x0;
        }
        uVar4 = uVar6 + uVar5;
      }
      return pdVar7;
    }
    if (pdVar7 != (dwarf_fde *)0x0) {
      pdVar3 = (dwarf_fde *)pdVar7->length;
      do {
        pdVar2 = search_fdes(pdVar3,pc);
        pdVar7 = (dwarf_fde *)&pdVar7->CIE_delta;
        if (pdVar2 != (dwarf_fde *)0x0) break;
        pdVar3 = *(dwarf_fde **)pdVar7;
      } while (pdVar3 != (dwarf_fde *)0x0);
      goto LAB_0029fa34;
    }
  }
  pdVar2 = search_fdes(pdVar3,pc);
LAB_0029fa34:
  SignalSema(__sce_eh_sema_id);
  return pdVar2;
}

static void* extract_cie_info(fde *f, cie_info *c) {
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  void *pvVar7;
  size_t sVar8;
  char *pcVar9;
  uchar *puVar10;
  uint local_30 [4];
  
  pcVar9 = (char *)((int)f + (0xd - f->CIE_delta));
  c->augmentation = pcVar9;
  iVar4 = strcmp(pcVar9,"");
  pcVar9 = c->augmentation;
  if (iVar4 != 0) {
    iVar4 = strcmp(pcVar9,"eh");
    if (iVar4 == 0) {
      pcVar9 = c->augmentation;
    }
    else {
      pcVar9 = c->augmentation;
      if (*pcVar9 != 'z') {
        return (void *)0x0;
      }
    }
  }
  sVar8 = strlen(pcVar9);
  pcVar9 = c->augmentation;
  iVar4 = (int)sVar8;
  puVar10 = (uchar *)(pcVar9 + iVar4 + 1);
  iVar5 = strcmp(pcVar9,"eh");
  if (iVar5 == 0) {
    uVar1 = (uint)(pcVar9 + iVar4 + 4) & 3;
    uVar2 = (uint)puVar10 & 3;
    puVar3 = (uint *)(puVar10 + -uVar2);
    puVar10 = (uchar *)(pcVar9 + iVar4 + 5);
    c->eh_ptr = (void *)(*(int *)(pcVar9 + iVar4 + 4 + -uVar1) << (3 - uVar1) * 8 &
                         -1 << (4 - uVar2) * 8 | *puVar3 >> uVar2 * 8);
  }
  else {
    c->eh_ptr = (void *)0x0;
  }
  puVar10 = (uchar *)decode_uleb128(puVar10,(uint *)&c->code_align);
  pbVar6 = (byte *)decode_sleb128(puVar10,&c->data_align);
  c->ra_regno = (uint)*pbVar6;
  pbVar6 = pbVar6 + 1;
  if (*c->augmentation == 'z') {
    pvVar7 = decode_uleb128(pbVar6,local_30);
    pbVar6 = (byte *)((int)pvVar7 + local_30[0]);
  }
  return pbVar6;
}

static void* decode_stack_op(unsigned char *buf, frame_state *state) {
  byte bVar1;
  void *pvVar2;
  uchar *buf_00;
  uint local_30 [4];
  
  bVar1 = *buf;
  buf_00 = buf + 1;
  if (bVar1 < 0x70) {
    if (0x4f < bVar1) {
      state->cfa_reg = bVar1 - 0x50;
      return buf_00;
    }
    if (bVar1 == 6) {
      state->indirect = '\x01';
      return buf_00;
    }
    if (bVar1 == 0x23) {
      pvVar2 = decode_uleb128(buf_00,local_30);
      state->cfa_offset = (long)(int)local_30[0];
      return pvVar2;
    }
LAB_0029fc78:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (bVar1 == 0x90) {
    buf_00 = (uchar *)decode_sleb128(buf_00,(int *)local_30);
    state->cfa_reg = (short)local_30[0];
  }
  else if (0x8f < bVar1) {
    if (bVar1 != 0x92) goto LAB_0029fc78;
    buf_00 = (uchar *)decode_sleb128(buf_00,(int *)local_30);
    state->cfa_reg = (short)local_30[0];
    goto LAB_0029fc38;
  }
  state->cfa_reg = bVar1 - 0x70;
LAB_0029fc38:
  pvVar2 = decode_sleb128(buf_00,(int *)local_30);
  state->base_offset = (long)(int)local_30[0];
  return pvVar2;
}

static void* execute_cfa_insn(void *p, frame_state_internal *state, cie_info *info, void **pc) {
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  ushort uVar4;
  void *pvVar5;
  frame_state_internal *pfVar6;
  uchar *puVar7;
  frame_state_internal *pfVar8;
  frame_state_internal *pfVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ushort *buf;
  ushort *puVar15;
  uint local_30;
  uint local_2c;
  uint local_28 [2];
  
                    /* WARNING: Load size is inaccurate */
  bVar1 = *p;
  buf = (ushort *)((int)p + 1);
  if ((bVar1 & 0x40) != 0) {
    pvVar5 = *pc;
    uVar10 = (bVar1 & 0x3f) * info->code_align;
LAB_0029fdac:
    *pc = (void *)((int)pvVar5 + uVar10);
    return buf;
  }
  if ((bVar1 & 0x80) != 0) {
    local_2c = bVar1 & 0x3f;
    pvVar5 = decode_uleb128((uchar *)buf,&local_30);
    if (local_2c == (ushort)(state->s).cfa_reg) {
      return pvVar5;
    }
    iVar11 = info->data_align;
LAB_0029fe14:
    (state->s).saved[local_2c] = '\x01';
    (state->s).reg_or_offset[local_2c] = (long)(int)(local_30 * iVar11);
    return pvVar5;
  }
  if ((bVar1 & 0xc0) != 0) {
    (state->s).saved[bVar1 & 0x3f] = '\0';
    return buf;
  }
  switch(bVar1) {
  case 0:
  case 7:
  case 8:
    break;
  case 1:
    uVar10 = (int)p + 4U & 3;
    uVar2 = (uint)buf & 3;
    puVar3 = (uint *)((int)buf - uVar2);
    buf = (ushort *)((int)p + 5);
    *pc = (void *)((*(int *)(((int)p + 4U) - uVar10) << (3 - uVar10) * 8 |
                   (uint)bVar1 * 4 & 0xffffffffU >> (uVar10 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                  *puVar3 >> uVar2 * 8);
    break;
  case 2:
    uVar10 = (uint)*(byte *)buf;
    buf = (ushort *)((int)p + 2);
    goto LAB_0029fdc4;
  case 3:
    uVar4 = *buf;
    buf = (ushort *)((int)p + 3);
    pvVar5 = *pc;
    uVar10 = (uint)uVar4;
    goto LAB_0029fdac;
  case 4:
    uVar10 = (int)p + 4U & 3;
    uVar2 = (uint)buf & 3;
    uVar10 = (*(int *)(((int)p + 4U) - uVar10) << (3 - uVar10) * 8 |
             (uint)(&switchD_0029fd5c::switchdataD_003eba40)[bVar1] &
             0xffffffffU >> (uVar10 + 1) * 8) & -1 << (4 - uVar2) * 8 |
             *(uint *)((int)buf - uVar2) >> uVar2 * 8;
    buf = (ushort *)((int)p + 5);
LAB_0029fdc4:
    *pc = (void *)((int)*pc + uVar10);
    break;
  case 5:
    puVar7 = (uchar *)decode_uleb128((uchar *)buf,&local_2c);
    pvVar5 = decode_uleb128(puVar7,&local_30);
    if (local_2c == (ushort)(state->s).cfa_reg) {
      return pvVar5;
    }
    iVar11 = info->data_align;
    goto LAB_0029fe14;
  case 6:
    buf = (ushort *)decode_uleb128((uchar *)buf,&local_2c);
    (state->s).saved[local_2c] = '\0';
    break;
  case 9:
    puVar7 = (uchar *)decode_uleb128((uchar *)buf,&local_2c);
    buf = (ushort *)decode_uleb128(puVar7,local_28);
    (state->s).saved[local_2c] = '\x02';
    (state->s).reg_or_offset[local_2c] = (ulong)local_28[0];
    break;
  case 10:
    pfVar6 = (frame_state_internal *)malloc(0x480);
    pfVar8 = state;
    pfVar9 = pfVar6;
    do {
      pvVar5 = (pfVar8->s).eh_ptr;
      lVar12 = (pfVar8->s).cfa_offset;
      lVar13 = (pfVar8->s).base_offset;
      lVar14 = (pfVar8->s).args_size;
      (pfVar9->s).cfa = (pfVar8->s).cfa;
      (pfVar9->s).eh_ptr = pvVar5;
      (pfVar9->s).cfa_offset = lVar12;
      (pfVar9->s).base_offset = lVar13;
      (pfVar9->s).args_size = lVar14;
      pfVar8 = (frame_state_internal *)(pfVar8->s).reg_or_offset;
      pfVar9 = (frame_state_internal *)(pfVar9->s).reg_or_offset;
    } while (pfVar8 != state + 1);
    state->saved_state = pfVar6;
    break;
  case 0xb:
    pfVar8 = state->saved_state;
    pfVar9 = pfVar8;
    do {
      pvVar5 = (pfVar9->s).eh_ptr;
      lVar12 = (pfVar9->s).cfa_offset;
      lVar13 = (pfVar9->s).base_offset;
      lVar14 = (pfVar9->s).args_size;
      (state->s).cfa = (pfVar9->s).cfa;
      (state->s).eh_ptr = pvVar5;
      (state->s).cfa_offset = lVar12;
      (state->s).base_offset = lVar13;
      (state->s).args_size = lVar14;
      pfVar9 = (frame_state_internal *)(pfVar9->s).reg_or_offset;
      state = (frame_state_internal *)(state->s).reg_or_offset;
    } while (pfVar9 != pfVar8 + 1);
    free(pfVar8);
    break;
  case 0xc:
    puVar7 = (uchar *)decode_uleb128((uchar *)buf,&local_2c);
    buf = (ushort *)decode_uleb128(puVar7,&local_30);
    (state->s).cfa_offset = (long)(int)local_30;
    (state->s).cfa_reg = (short)local_2c;
    break;
  case 0xd:
    buf = (ushort *)decode_uleb128((uchar *)buf,&local_2c);
    (state->s).cfa_reg = (short)local_2c;
    break;
  case 0xe:
    buf = (ushort *)decode_uleb128((uchar *)buf,&local_30);
    (state->s).cfa_offset = (long)(int)local_30;
    break;
  case 0xf:
    (state->s).cfa_reg = 0;
    (state->s).cfa_offset = 0;
    (state->s).base_offset = 0;
    (state->s).indirect = '\0';
    buf = (ushort *)decode_uleb128((uchar *)buf,&local_30);
    puVar15 = (ushort *)((int)buf + local_30);
    for (; buf < puVar15; buf = (ushort *)decode_stack_op((uchar *)buf,&state->s)) {
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 0x2d:
    local_2c = 0x10;
    do {
      (state->s).saved[local_2c] = '\x01';
      uVar10 = local_2c + 1;
      (state->s).reg_or_offset[local_2c] = (ulong)((local_2c - 0x10) * 4);
      local_2c = uVar10;
    } while (uVar10 < 0x20);
    break;
  case 0x2e:
    buf = (ushort *)decode_uleb128((uchar *)buf,&local_30);
    (state->s).args_size = (long)(int)local_30;
    break;
  case 0x2f:
    puVar7 = (uchar *)decode_uleb128((uchar *)buf,&local_2c);
    buf = (ushort *)decode_uleb128(puVar7,&local_30);
    iVar11 = info->data_align;
    (state->s).saved[local_2c] = '\x01';
    (state->s).reg_or_offset[local_2c] = (long)(int)-(local_30 * iVar11);
  }
  return buf;
}

frame_state* __frame_state_for(void *pc_target, frame_state *state_in) {
  int iVar1;
  frame_state *pfVar2;
  frame_state *pfVar3;
  void *pvVar4;
  int *piVar5;
  frame_state_internal *pfVar6;
  frame_state_internal *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *buf;
  undefined local_4f0 [32];
  frame_state_internal local_4d0;
  uint local_50;
  void *local_4c [3];
  
  pfVar2 = (frame_state *)find_fde(pc_target);
  pfVar3 = pfVar2;
  if (pfVar2 != (frame_state *)0x0) {
    pfVar3 = (frame_state *)extract_cie_info((dwarf_fde *)pfVar2,(cie_info *)local_4f0);
    if (pfVar3 != (frame_state *)0x0) {
      memset(&local_4d0,0,0x480);
      piVar5 = (int *)((int)pfVar2 + (4 - (int)pfVar2->eh_ptr));
      local_4d0.s.retaddr_column = local_4f0._16_2_;
      iVar1 = *piVar5;
      local_4d0.s.eh_ptr = (void *)local_4f0._4_4_;
      for (; pfVar3 < (frame_state *)((int)piVar5 + iVar1 + 4);
          pfVar3 = (frame_state *)
                   execute_cfa_insn(pfVar3,&local_4d0,(cie_info *)local_4f0,(void **)0x0)) {
      }
      buf = &pfVar2->base_offset;
      if (*(char *)local_4f0._0_4_ == 'z') {
        pvVar4 = decode_uleb128((uchar *)buf,&local_50);
        buf = (long *)((int)pvVar4 + local_50);
      }
      pvVar4 = pfVar2->cfa;
      local_4c[0] = *(void **)&pfVar2->cfa_offset;
      while ((buf < (undefined *)((int)pfVar2->reg_or_offset + ((int)pvVar4 - 0x1cU)) &&
             (local_4c[0] <= pc_target))) {
        buf = (long *)execute_cfa_insn(buf,&local_4d0,(cie_info *)local_4f0,local_4c);
      }
      pfVar3 = state_in;
      pfVar7 = &local_4d0;
      do {
        pfVar6 = pfVar7;
        pfVar2 = pfVar3;
        pvVar4 = (pfVar6->s).eh_ptr;
        lVar8 = (pfVar6->s).cfa_offset;
        lVar9 = (pfVar6->s).base_offset;
        lVar10 = (pfVar6->s).args_size;
        pfVar2->cfa = (pfVar6->s).cfa;
        pfVar2->eh_ptr = pvVar4;
        pfVar2->cfa_offset = lVar8;
        pfVar2->base_offset = lVar9;
        pfVar2->args_size = lVar10;
        pfVar7 = (frame_state_internal *)(pfVar6->s).reg_or_offset;
        pfVar3 = (frame_state *)pfVar2->reg_or_offset;
      } while (pfVar7 != (frame_state_internal *)(local_4d0.s.saved + 100));
      lVar8 = (pfVar6->s).reg_or_offset[1];
      lVar9 = (pfVar6->s).reg_or_offset[2];
      pfVar2->reg_or_offset[0] = *(long *)pfVar7;
      pfVar2->reg_or_offset[1] = lVar8;
      pfVar2->reg_or_offset[2] = lVar9;
      pfVar3 = state_in;
    }
  }
  return pfVar3;
}
