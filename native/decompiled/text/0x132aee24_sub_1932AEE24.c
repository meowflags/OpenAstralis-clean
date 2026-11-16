// sub_1932AEE24
// rva 0x132aee24  size 406  section .text  group text
// window base 0x1932aee24: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AEE24(_DWORD a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r14d
  char v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r12d
  int v11; // r13d
  int v12; // r15d
  __int64 i; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  int v18; // edi
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // cc
  int v27; // [rsp+0h] [rbp-100h] BYREF
  int v28; // [rsp+8h] [rbp-F8h]
  __int64 v29; // [rsp+10h] [rbp-F0h]
  _DWORD *v30; // [rsp+20h] [rbp-E0h]
  _DWORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[65]; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+260h] [rbp+160h] BYREF
  __int64 v37; // [rsp+268h] [rbp+168h]
  int v38; // [rsp+470h] [rbp+370h] BYREF
  __int64 v39; // [rsp+478h] [rbp+378h]
  __int64 v40; // [rsp+680h] [rbp+580h]

  v6 = a6;
  v32 = a4;
  v7 = a5;
  v33 = sub_1932C87D0(a1: a3, a2, a3: 0, a4, a5, a6, a7: v27, a8: v28, a9: v29);
  v9 = (unsigned int)(v8 + 1);
  v10 = v7 & 2;
  v11 = v7 & 1;
  v12 = v7 & 4;
  do
  {
    v38 = 0;
    v34 = 0;
    v36 = 0;
    i = (unsigned int)(v6 / 1000);
    v31[0] = v6 / 1000;
    v14 = 0;
    v31[1] = 1000 * (v6 % 1000);
    if ( v11 != 0 )
    {
      v39 = v8;
      v38 = 1;
    }
    if ( v10 != 0 )
    {
      v14 = 1;
      v35[0] = v8;
      v34 = 1;
    }
    if ( v12 != 0 )
    {
      for ( i = 0; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
      {
        if ( v35[(unsigned int)i] == v8 )
          break;
      }
      if ( (_DWORD)i == (_DWORD)v14 )
      {
        v35[(unsigned int)i] = v8;
        ++v34;
      }
      v37 = v8;
      v36 = 1;
    }
    *(_DWORD *)MEMORY[0x79B48](a1: v8, a2: v9, a3: i, a4: v14) = 0;
    v30 = v31;
    v17 = MEMORY[0x799C8](a1: v15, a2: v16, a3: &v38, a4: (unsigned int)v16, a5: &v34, a6: &v36);
    v21 = sub_1932C87D0(a1: v18, a2: v17, a3: 0, a4: v32, a5: v19, a6: v20, a7: v27, a8: v28, a9: v29);
    v6 += v33 - v21;
    if ( v6 <= 0 )
      break;
    v25 = (int)v9 <= 0;
    v24 = 1;
    v9 = (unsigned int)(v8 + 1);
  }
  while ( v25 );
  return sub_1932C8DE0(a1: v8, a2: v9, a3: v22, a4: (unsigned __int64)&v27 ^ v40, a5: v23, a6: v24);
}
