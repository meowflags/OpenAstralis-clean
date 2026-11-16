// sub_1932A8F10
// rva 0x132a8f10  size 513  section .text  group text
// window base 0x1932a8f10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A8F10(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  signed __int64 v6; // rax
  void *v7; // rsp
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  _QWORD *v24; // rdi
  _QWORD *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // ebx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v48; // [rsp+0h] [rbp-20A8h] BYREF
  int v49; // [rsp+8h] [rbp-20A0h]
  __int64 v50; // [rsp+10h] [rbp-2098h]
  int v51; // [rsp+20h] [rbp-2088h]
  int v52; // [rsp+28h] [rbp-2080h]
  unsigned int v53; // [rsp+30h] [rbp-2078h]
  unsigned int v54; // [rsp+34h] [rbp-2074h] BYREF
  __int64 v55; // [rsp+38h] [rbp-2070h]
  _QWORD *v56; // [rsp+40h] [rbp-2068h]
  _BYTE v57[8192]; // [rsp+50h] [rbp-2058h] BYREF
  unsigned __int64 v58; // [rsp+2050h] [rbp-58h]

  v7 = alloca(v6);
  v58 = (unsigned __int64)&v48 ^ MEMORY[0x336F80];
  v8 = 0;
  v9 = a6;
  v53 = a5;
  v55 = a3;
  if ( a5 <= 0 )
  {
    sub_1932A85F8(a1, a2, a3, a4: 0x57u);
    return sub_1932C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v48 ^ v58, a5: v14, a6: v15);
  }
  if ( (unsigned __int64)a5 > 0x100 )
  {
    v16 = (_BYTE *)MEMORY[0x79AD0](a1, a2, a3, a4: 32LL * a5);
    if ( v16 != nullptr )
      goto LABEL_7;
    v53 = 256;
  }
  v16 = v57;
LABEL_7:
  if ( (int)v9 <= 0 )
  {
    v18 = (unsigned int)-((_DWORD)v9 != 0);
  }
  else
  {
    v17 = MEMORY[0x79418]();
    v18 = (unsigned int)v9;
    v8 = v17 + v9;
  }
  v19 = a4 + 14;
  v56 = a4 + 14;
  MEMORY[0x79798](a1, a2: v18, a3, a4: a4 + 14);
  v24 = a4 + 2;
  while ( 1 )
  {
    while ( (_QWORD *)*v24 != v24 )
    {
      if ( (int)sub_1932A9288(
                  a1: (_DWORD)v24,
                  a2: v21,
                  a3: (unsigned int)v24[1] - 48,
                  (_DWORD)a4,
                  a5: v22,
                  a6: v23,
                  a7: v48,
                  a8: v49,
                  a9: v50) < 0 )
      {
        v25 = a4 + 19;
        goto LABEL_22;
      }
    }
    v25 = a4 + 19;
    ++a4[19];
    MEMORY[0x796E8](a1: v24, a2: v21, a3: v20, a4: v19);
    v26 = *a4;
    v52 = 0;
    v51 = v27;
    v29 = MEMORY[0x793E0](a1: v28, a2: v27, a3: v16, a4: v26, a5: v53, a6: &v54);
    MEMORY[0x79798](a1: v31, a2: v32, a3: v30, a4: a4 + 14);
    --a4[19];
    if ( v29 == 0 )
      break;
    v35 = sub_1932A8A9C(a1: v33, a2: v34, a3: v55, (__int64)a4, a5: (__int64)v16, a6: v54);
    if ( v35 != 0 )
      goto LABEL_23;
    if ( (int)v9 >= 0 )
    {
      v36 = MEMORY[0x79418]();
      if ( v36 >= v8 )
      {
        MEMORY[0x793D8](a1: v24, a2: v37, a3: v20, a4: 258);
        goto LABEL_23;
      }
      v21 = (unsigned int)(v8 - v36);
    }
    v19 = a4 + 14;
  }
  v38 = MEMORY[0x79758](a1: v33);
  v42 = sub_1932A8158(a1: v40, a2: v41, a3: v39, a4: v38);
  *(_DWORD *)MEMORY[0x79B48](a1: v45, a2: v46, a3: v43, a4: v44) = v42;
LABEL_22:
  v35 = -1;
LABEL_23:
  if ( *v25 != 0 )
  {
    while ( (_QWORD *)*v24 != v24
         && (int)sub_1932A9288(
                   a1: (_DWORD)v24,
                   a2: v21,
                   a3: (unsigned int)v24[1] - 48,
                   (_DWORD)a4,
                   a5: v22,
                   a6: v23,
                   a7: v48,
                   a8: v49,
                   a9: v50) >= 0 )
      ;
  }
  MEMORY[0x796E8](a1: v24, a2: v21, a3: v20, a4: v56);
  if ( v16 != v57 )
    MEMORY[0x79AE0](a1: v12, a2: v13, a3: v11, a4: v16);
  if ( v35 < 0 )
    MEMORY[0x79758](a1: v12);
  return sub_1932C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v48 ^ v58, a5: v14, a6: v15);
}
