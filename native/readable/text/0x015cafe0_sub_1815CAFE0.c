// sub_15CAFE0
// rva 0x015cafe0  size 390  section .text  group text
// window base 0x1815cafe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CAFE0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r13
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rbp
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+10h] [rbp-28h]
  _DWORD *v31; // [rsp+18h] [rbp-20h]
  _DWORD *v32; // [rsp+20h] [rbp-18h]
  _DWORD *v33; // [rsp+28h] [rbp-10h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v12 + 8) )
  {
    v33 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v11 )
  {
    if ( (unsigned __int16)v11[2 * v11[2 * (*a3 >> 3) + 5]
                             + 3
                             + (v11[2 * (*a3 >> 3) + 11] & (0x61Cu >> HIBYTE(v11[2 * (*a3 >> 3) + 11])))] != 1564 )
    {
LABEL_10:
      sub_2770780();
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_15CB180();
    }
    v13 = *a3 >> 3;
    v14 = &v11[2 * v11[2 * v13 + 5]];
    v15 = v11[2 * v13 + 11] & (0x61Cu >> HIBYTE(v11[2 * v13 + 11]));
    v16 = &v11[2 * v13];
    v17 = *(_QWORD *)((char *)v16 + HIWORD(v14[v15 + 3]) + 8);
    v32 = v16;
    v33 = a3;
    v31 = v14;
    v34 = v15;
    v30 = ((__int64 (*)(void))(v10 + v17))();
    v20 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v10
                                                              + *(_QWORD *)((char *)v32 + HIWORD(v31[v34 + 3]) + 16)))(
            a1: v18,
            a2: v19,
            a3: v33);
    v25 = *(_QWORD *)(v12 + 40);
    v26 = v25 + 24;
    if ( (unsigned __int64)(v25 + 24) > *(_QWORD *)(v12 + 32) )
      return sub_1815CB115(a1: v21, a2: v22, a3: v25, a4: v26, a5: v23, a6: v24, a7, a8, a9, a10);
    *(_QWORD *)(v12 + 40) = v26;
    *(_DWORD *)v25 = 34436688;
    *(_DWORD *)(v25 + 4) = 0;
    *(_QWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    v27 = v30;
    *(_DWORD *)(v25 + 8) = (unsigned __int64)(v20 - (_QWORD)v11) >> 3;
    *(_DWORD *)(v25 + 4) = (unsigned __int64)(v27 - (_QWORD)v11) >> 3;
    if ( *(int *)(v12 + 16) <= 0 )
    {
      v30 = v27;
      sub_277F280(a1: v21, a2: v22, a3: v25, a4: v20);
    }
    return v25;
  }
  v33 = a3;
  sub_2771080();
  goto LABEL_10;
}
