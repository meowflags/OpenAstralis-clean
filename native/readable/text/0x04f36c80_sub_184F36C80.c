// sub_4F36C80
// rva 0x04f36c80  size 538  section .text  group text
// window base 0x184f36c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F36C80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebp
  unsigned __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  unsigned __int64 v27; // [rsp+10h] [rbp-28h]
  _DWORD *v28; // [rsp+18h] [rbp-20h]
  unsigned int v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+24h] [rbp-14h]
  unsigned int v31; // [rsp+28h] [rbp-10h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v34 = a1;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    v33 = a6;
    sub_1EB84E0();
LABEL_18:
    sub_2770780();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F36EA0();
  }
  if ( a5 == v7 )
    a5 = v7 + 88325320;
  v28 = a5;
  v27 = a3;
  if ( (unsigned __int16)v7[2 * v7[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v7[2 * (*a5 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*a5 >> 3) + 11])))] != 1384 )
    goto LABEL_18;
  v33 = a6;
  v9 = *a5 >> 3;
  v10 = v7[2 * v9 + 11] & (0x568u >> HIBYTE(v7[2 * v9 + 11]));
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                            + *(_QWORD *)((char *)&v7[2 * v9 + 10]
                                                                        + HIWORD(v7[2 * (unsigned int)v7[2 * v9 + 5]
                                                                                  + 3
                                                                                  + v10]))))(
          a1,
          a2: v10,
          a3: a5);
  sub_632A360(a1: v7 + 94283338, a2: v13, a3: v33, a4: v12, a5: v34, a6: v11);
  v14 = *(_DWORD *)(v27 + 8);
  v15 = (unsigned int)*(char *)(v27 + 12);
  v16 = &v7[2 * *(unsigned int *)(v27 + 4)];
  v32 = v34 - v33;
  v31 = v14 + v34 - v33;
  v30 = v14;
  v29 = v15;
  v18 = sub_4F39060(a1: v34, a2: v17, a3: v16, a4: v15, a5: (unsigned int)v15, a6: v31);
  if ( *v28 >> 3 == 4260335 )
  {
    v26 = v18;
    v19 = sub_4F37BC0(a1: v28, a2: v33, a3: v18, a4: v34, a5: v29, a6: v30);
  }
  else
  {
    v26 = v18;
    v19 = sub_4F37880(a1: v28, a2: v33, a3: v18, a4: v34, a5: v29, a6: v30);
  }
  if ( v26 == v19 )
  {
    v22 = v31;
    v21 = v27;
  }
  else
  {
    v21 = v27;
    *(_BYTE *)(v27 + 12) = 1;
    v22 = v31;
  }
  *(_DWORD *)(v21 + 8) = v22;
  *(_DWORD *)(v21 + 4) = (unsigned __int64)(v19 - (_QWORD)v7) >> 3;
  if ( (*(_DWORD *)v21 & 2) != 0 )
  {
    v24 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v24) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v24) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v29);
  return v21;
}
