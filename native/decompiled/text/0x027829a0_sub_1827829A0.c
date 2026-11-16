// sub_1827829A0
// rva 0x027829a0  size 317  section .text  group text
// window base 0x1827829a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827829A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __m128 v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __m128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r9
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  _DWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v36; // [rsp+8h] [rbp-20h]
  __int64 v37; // [rsp+10h] [rbp-18h]
  __int64 v38; // [rsp+18h] [rbp-10h]
  __int64 v39; // [rsp+20h] [rbp-8h]

  v38 = a5;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
  {
    v39 = a6;
    MEMORY[0x181EB83C0]();
    goto LABEL_15;
  }
  v39 = a6;
  v37 = v7 + 376614544;
  MEMORY[0x181EB8140](a1, a2, a3: v7 + 376614544);
  if ( *(_DWORD *)(v8 + 324) != 0 )
  {
LABEL_15:
    *(double *)v12.m128_u64 = MEMORY[0x1828C1C40](a1: v10, a2: v11, a3: v7 + 362219776);
LABEL_16:
    sub_18276E420(a1: v10, a2: v11, a3: v12);
    goto LABEL_13;
  }
  if ( v38 == v7 || *(_DWORD *)(v38 + 4) == 0 )
    goto LABEL_16;
  if ( v8 != *(_QWORD *)(v7 + 376669120) )
  {
    if ( *(_DWORD *)(v8 + 336) != 0 )
    {
      MEMORY[0x1828C1C40](a1: v10, a2: v11, a3: v7 + 362218712);
    }
    else if ( v8 != *(_QWORD *)(v7 + 376668760) )
    {
      sub_182782460(a1: v10, a2: v11, a3: v7 + 376669144, a4: v9, a5: v38, a6: v39);
      goto LABEL_9;
    }
    v32 = (_DWORD *)MEMORY[0x1828C1C40](a1: v10, a2: v11, a3: v7 + 362218712);
    while ( 1 )
    {
LABEL_13:
      v36 = v32;
      *(double *)v20.m128_u64 = MEMORY[0x181EB8320](a1: v33, a2: v34, a3: v37);
      sub_182769900(
        a1: v22,
        a2: v23,
        a3: v36,
        a4: v21,
        a5: (__int64)&a7,
        a6: v24,
        a7: v20,
        a8: v25,
        a9: v26,
        a10: v27,
        a11: v28,
        a12: v29,
        a13: v30,
        a14: v31);
    }
  }
  sub_182782460(a1: v10, a2: v11, a3: v7 + 376669184, a4: v9, a5: v38, a6: v39);
LABEL_9:
  result = MEMORY[0x181EB8320](a1: v13, a2: v14, a3: v37);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v18, a2: v19, a3: v16, a4: v17);
  return result;
}
