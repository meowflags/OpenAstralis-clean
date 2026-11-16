// sub_2777BE0
// rva 0x02777be0  size 656  section .text  group text
// window base 0x182777be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2777BE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm6
  __m128 v17; // xmm7
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // bl
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  char v30; // [rsp+0h] [rbp-18h] BYREF
  __int64 v31; // [rsp+8h] [rbp-10h]
  int v32; // [rsp+14h] [rbp-4h]

  v31 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v4 + 8) )
  {
    *(double *)v10.m128_u64 = sub_1EB84E0();
    goto LABEL_32;
  }
  if ( a3 != v3 )
  {
    v5 = sub_4FF37C0();
    v18 = v31;
    v19 = *(unsigned int *)(v31 + 4);
    v20 = *(_BYTE *)(v31 + 12);
    if ( v5 != -750130993 )
    {
      if ( v5 != 3002386 )
      {
LABEL_5:
        if ( *(int *)(v4 + 16) <= 0 )
        {
          v32 = -1;
          sub_277F280(a1: v6, a2: v7, a3: 0xFFFFFFFFLL);
        }
        return v3;
      }
      if ( v3 + 365129736 == v31 )
      {
        v24 = 1;
        goto LABEL_23;
      }
      if ( v20 != 0 )
      {
        v24 = 0;
        goto LABEL_23;
      }
      if ( (_DWORD)v19 != 0 )
      {
        if ( *(_DWORD *)(v3 + 8 * v19 + 8) == 4 )
          v24 = sub_282F960(a1: 12, a2: 4, a3: v3 + 376668400, a4: v19, a5: 12, a6: v3 + 8 * v19);
        else
          v24 = 0;
LABEL_23:
        if ( v24 != 0 )
          JUMPOUT(0x304EC0D35LL);
        goto LABEL_5;
      }
LABEL_33:
      sub_2771080(
        a1: v6,
        a2: v7,
        a3: v31,
        a4: v19,
        a5: v8,
        a6: v9,
        a7: v10,
        a8: v11,
        a9: v12,
        a10: v13,
        a11: v14,
        a12: v15,
        a13: v16,
        a14: v17,
        a15: v30);
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
      return sub_2777E80(a1: v27, a2: v28, a3: v25, a4: v26, a5: v29);
    }
    v22 = v3 + 365128120;
    if ( v3 + 365128120 == v31 )
    {
      v23 = 1;
      goto LABEL_16;
    }
    if ( v20 != 0 )
    {
      v23 = 0;
      goto LABEL_16;
    }
    if ( (_DWORD)v19 != 0 )
    {
      if ( *(_DWORD *)(v3 + 8 * v19 + 8) == 7 )
        v23 = sub_282F960(a1: 12, a2: 7, a3: v3 + 376668376, a4: v19, a5: 12, a6: v3 + 8 * v19);
      else
        v23 = 0;
LABEL_16:
      if ( v23 != 0 )
        JUMPOUT(0x304EC0CCFLL);
      goto LABEL_5;
    }
LABEL_32:
    sub_2771080(
      a1: v6,
      a2: v7,
      a3: v18,
      a4: v19,
      a5: v22,
      a6: v9,
      a7: v10,
      a8: v11,
      a9: v12,
      a10: v13,
      a11: v14,
      a12: v15,
      a13: v16,
      a14: v17,
      a15: v30);
    goto LABEL_33;
  }
  if ( *(int *)(v4 + 16) <= 0 )
    sub_277F280(a1, a2, a3);
  return v3;
}
