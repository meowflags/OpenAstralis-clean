// sub_15A7DA0
// rva 0x015a7da0  size 782  section .text  group text
// window base 0x1815a7da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A7DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *); // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+8h] [rbp-40h]
  _DWORD *v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]
  _DWORD *v28; // [rsp+20h] [rbp-28h]
  __int64 v29; // [rsp+28h] [rbp-20h]
  unsigned int v30; // [rsp+30h] [rbp-18h]
  int v31; // [rsp+34h] [rbp-14h]
  __int64 v32; // [rsp+38h] [rbp-10h]
  unsigned int v33; // [rsp+44h] [rbp-4h]

  v29 = a3;
  if ( (unsigned __int64)&v24 <= v7[1] )
  {
LABEL_13:
    v28 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    if ( (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x568u >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1384 )
    {
LABEL_15:
      v28 = a5;
      sub_2770780();
      goto LABEL_16;
    }
    v8 = *a5 >> 3;
    v9 = v6[2 * v8 + 11] & (0x568u >> HIBYTE(v6[2 * v8 + 11]));
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                             + *(_QWORD *)((char *)&v6[2 * v8 + 14]
                                                                         + HIWORD(v6[2 * (unsigned int)v6[2 * v8 + 5]
                                                                                   + 3
                                                                                   + v9])));
    v28 = a5;
    v11 = v10(a1, a2: v9, a3: a5);
    v27 = v11;
    if ( (_DWORD *)v11 != v6 )
    {
      v15 = *(unsigned int *)(v11 + 4);
      v33 = *(char *)(v11 + 12);
      v26 = &v6[2 * v15];
      v16 = sub_4FF0580(a1: v13, a2: v14, a3: v33, a4: v33, a5: v26, a6: 1);
      v25 = v16;
      v19 = *(unsigned int *)(v16 + 8);
      v20 = *(_DWORD *)(v16 + 8) + 1;
      if ( (v20 & 0x80000000) == 0 )
      {
        v21 = v7[5];
        v22 = (v20 + 19LL) & 0x1FFFFFFF8LL;
        if ( v22 >= 0x20000 || (v22 += v21, v22 > v7[4]) )
        {
          v32 = v20;
          v31 = v19;
          v30 = v20;
          v21 = sub_1EAA840(a1: 34082368, a2: v22, a3: 34082368, a4: v19, a5: v20);
          v20 = v30;
          LODWORD(v19) = v31;
        }
        else
        {
          v7[5] = v22;
          *(_QWORD *)v21 = 34082368;
          *(_DWORD *)(v21 + 8) = v20;
        }
        v25 = v21;
        if ( (unsigned int)v19 >= v20 )
          JUMPOUT(0x302B33ED8LL);
        JUMPOUT(0x302B33ECDLL);
      }
      sub_579A560(a1: v17, a2: v18, a3: v16, a4: v19, a5: v20);
      goto LABEL_13;
    }
LABEL_16:
    sub_2771080(a1: v13, a2: v14, a3: v29, a4: v12, a5: v28);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A80C0();
  }
  sub_2771080();
  goto LABEL_15;
}
