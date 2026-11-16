// sub_182789A20
// rva 0x02789a20  size 553  section .text  group text
// window base 0x182789a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182789A20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 i; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 result; // rax
  __int64 v34; // rdx
  char v35; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+10h] [rbp-28h]
  __int64 v37; // [rsp+18h] [rbp-20h]
  __int64 v38; // [rsp+20h] [rbp-18h]
  unsigned int *v39; // [rsp+28h] [rbp-10h]
  int v40; // [rsp+34h] [rbp-4h]

  v39 = (unsigned int *)a3;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v15 + 8) )
  {
    v38 = a5;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v14 )
  {
    v16 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v16 == 0 )
    {
LABEL_24:
      v38 = a5;
      v18 = sub_182771080(a1, a2, a3, a4: v16, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
      goto LABEL_25;
    }
    v17 = (unsigned int)(*(_DWORD *)(v14 + 8 * v16 + 8) >> *(_BYTE *)(a5 + 12));
    v18 = v17 + 1;
    if ( (int)v17 + 1 < 0 )
    {
LABEL_25:
      sub_182770E80(a1, a2, a3: v18, a4: a3, a5, a6: v17, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
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
      return sub_182789C60();
    }
    v19 = *(_QWORD *)(v15 + 40);
    v20 = *(_QWORD *)(v15 + 32);
    v21 = (2LL * v18 + 19) & 0x3FFFFFFF8LL;
    v22 = 34089376;
    if ( v21 >= 0x20000 || v19 + v21 > v20 )
    {
      v40 = v17;
      v38 = a5;
      v19 = MEMORY[0x181EAA840](a1: v20, a2: v21, a3: 34089376, a4: 34089376, a5: v18);
      LODWORD(v17) = v40;
      a5 = v38;
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v19 + v21;
      *(_QWORD *)v19 = 34089376;
      *(_DWORD *)(v19 + 8) = v18;
      *(_DWORD *)(v19 + 12) = 0;
      if ( v21 - 16 >= 0x800 )
      {
        v40 = v17;
        v38 = a5;
        memset((void *)(v19 + 16), 0, v21 - 16);
        v22 = 0;
      }
      else
      {
        for ( i = 16; v21 > i; i += 8LL )
          *(_QWORD *)(v19 + i) = 0;
      }
    }
    v38 = a5;
    v40 = v17;
    v37 = v19;
    MEMORY[0x184FF3680](a1: v19, a2: 0, a3: a5, a4: v22, a5: 0);
    v27 = MEMORY[0x181EBBD60](a1: v25, a2: v26, a3: v14 + 376614152, a4: v24, a5: v37);
    v30 = *(_QWORD *)(v15 + 40);
    v31 = v30 + 16;
    if ( (unsigned __int64)(v30 + 16) > *(_QWORD *)(v15 + 32) )
    {
      v36 = v27;
      v30 = MEMORY[0x181EAA920](a1: v28, a2: v29, a3: 35802144);
      v27 = v36;
    }
    else
    {
      *(_QWORD *)(v15 + 40) = v31;
      *(_DWORD *)v30 = 35802144;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
    }
    v32 = (unsigned __int64)v39;
    result = (unsigned __int64)(v27 - v14) >> 3;
    *(_DWORD *)(v30 + 4) = result;
    *(_DWORD *)(v32 + 4) = (unsigned __int64)(v30 - v14) >> 3;
    v34 = *(unsigned int *)v32;
    if ( (v34 & 2) != 0 )
    {
      result = v32 & 0xFFFFFFFFFFF80000LL;
      v31 = (v32 & 0xFFFFFFFFFFF80000LL) + 2112;
      v34 = (v32 - v31) >> 9;
      if ( *(_BYTE *)((v32 & 0xFFFFFFFFFFF80000LL) + v34 + 0x38) != 0 )
        *(_BYTE *)(result + v34 + 56) = 0;
    }
    if ( *(int *)(v15 + 16) <= 0 )
      return sub_18277F280(a1: v28, a2: v29, a3: v34, a4: v31);
    return result;
  }
  sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
  goto LABEL_24;
}
