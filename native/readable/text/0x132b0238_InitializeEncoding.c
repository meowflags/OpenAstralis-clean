// InitializeEncoding
// rva 0x132b0238  size 762  section .text  group text
// window base 0x1932b0238: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall InitializeEncoding(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // edx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // eax
  int v24; // edi
  int v25; // esi
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // [rsp+0h] [rbp-48h]
  int v41; // [rsp+8h] [rbp-40h]
  int v42; // [rsp+10h] [rbp-38h]
  int v43; // [rsp+18h] [rbp-30h]

  a8 = v9;
  a9 = v10;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a4, a2: a3, a3: 3);
  if ( (int)result < 0 )
    return result;
  result = JNU_ClassString(a1: v13, a2: v14, a3: v12, a4: v13, a5: v15, a6: v16);
  v20 = result;
  if ( result == 0 )
    return result;
  if ( v18 == 0 )
    return JNU_ThrowByName(a1: v17, a2: 0, a3: 542552, a4: v17, a5: 543056, a6: v19);
  if ( (unsigned int)sub_1932CA1F7(a1: v17, a2: v18, a3: 542864, a4: v18) == 0
    || (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542872, a4: v22) == 0
    || (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542888, a4: v22) == 0
    || (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542904, a4: v22) == 0 )
  {
    MEMORY[0x3375f8]/* 0x3375f8 */ = 2;
    goto LABEL_27;
  }
  if ( (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542916, a4: v22) == 0 )
  {
    v23 = 5;
    goto LABEL_15;
  }
  if ( (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542928, a4: v22) == 0 )
  {
    MEMORY[0x3375f8]/* 0x3375f8 */ = 4;
LABEL_27:
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 264LL))(
               a1: v21,
               a2: v22,
               a3: v20,
               a4: v21,
               a5: 543120,
               a6: 543088);
    MEMORY[0x337610]/* 0x337610 */ = result;
    if ( result != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v34 + 264LL))(
                 a1: v34,
                 a2: v35,
                 a3: v20,
                 a4: v34,
                 a5: 535156,
                 a6: 543136);
      MEMORY[0x337608]/* 0x337608 */ = result;
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v36 + 752LL))(
                   a1: v36,
                   a2: v37,
                   a3: v20,
                   a4: v36,
                   a5: 543172,
                   a6: 543168);
        MEMORY[0x337618]/* 0x337618 */ = result;
        if ( result != 0 )
        {
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v38 + 752LL))(
                     a1: v38,
                     a2: v39,
                     a3: v20,
                     a4: v38,
                     a5: 543180,
                     a6: 537800);
          MEMORY[0x337620]/* 0x337620 */ = result;
        }
      }
    }
    return result;
  }
  if ( (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542940, a4: v22) == 0
    || (unsigned int)sub_1932CA1F7(a1: v21, a2: v22, a3: 542952, a4: v22) == 0 )
  {
    MEMORY[0x3375f8]/* 0x3375f8 */ = 3;
    goto LABEL_27;
  }
  v23 = 1;
LABEL_15:
  for ( MEMORY[0x3375f8]/* 0x3375f8 */ = v23; ; MEMORY[0x3375f8]/* 0x3375f8 */ = 5 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 1336LL))(
               a1: v21,
               a2: v22,
               a3: v22,
               a4: v21);
    v26 = result;
    if ( result == 0 )
      break;
    v27 = JNU_CallStaticMethodByName(
            a1: v24,
            a2: v25,
            a3: (unsigned int)&a7,
            a4: v24,
            a5: 543024,
            a6: 543016,
            a7: v40,
            a8: v41,
            a9: v42,
            a10: v43,
            a11: 542968,
            a12: result);
    if ( a7 != 0 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v28 + 136LL))(
        a1: v28,
        a2: v29,
        a3: *(_QWORD *)(*(_QWORD *)v28 + 136LL),
        a4: v28);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 184LL))(
      a1: v28,
      a2: v29,
      a3: v26,
      a4: v28);
    if ( a7 == 0 && v27 != 0 )
    {
      MEMORY[0x337600]/* 0x337600 */ = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v30 + 168LL))(
                           a1: v30,
                           a2: v31,
                           a3: v27,
                           a4: v30);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v32 + 184LL))(
        a1: v32,
        a2: v33,
        a3: v27,
        a4: v32);
      goto LABEL_27;
    }
    result = sub_1932CA1F7(a1: v30, a2: v31, a3: 542916, a4: v31);
    if ( (_DWORD)result == 0 )
      break;
    v22 = 542916;
  }
  MEMORY[0x3375f8]/* 0x3375f8 */ = 0;
  return result;
}
