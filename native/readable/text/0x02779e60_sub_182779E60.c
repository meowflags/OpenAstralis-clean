// sub_2779E60
// rva 0x02779e60  size 464  section .text  group text
// window base 0x182779e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // r9
  char v29; // [rsp+0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+8h] [rbp-20h]
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]

  v32 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v15 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( *(int *)(v15 + 336) >= 1 )
  {
    result = *(_QWORD *)(v14 + 376178832);
    if ( result == 0 )
    {
LABEL_20:
      if ( *(int *)(v15 + 16) <= 0 )
        return sub_277F280(a1, a2, a3);
      return result;
    }
    v17 = *(unsigned int *)(result + 72);
    if ( (_DWORD)v17 == 0
      || (v18 = *(_DWORD *)(v14 + 8 * v17) >> 3, *(__int16 *)(v14 + 8 * v18 + 62) >= 3)
      && (a14 = *(unsigned int *)(v14 + 8 * v18 + 16), *(_DWORD *)(v14 + 8 * a14 + 20) == 70129) )
    {
LABEL_8:
      a3 = *(_QWORD *)(result + 256);
      while ( 1 )
      {
        result = v32;
        if ( a3 == 0 )
          goto LABEL_20;
        v23 = *(unsigned int *)(a3 + 72);
        v24 = v14 + 8 * v23;
        if ( (_DWORD)v23 != 0 )
        {
          v25 = *(_DWORD *)(v14 + 8 * v23) >> 3;
          if ( *(__int16 *)(v14 + 8 * v25 + 62) >= 3
            && *(_DWORD *)(v14 + 8LL * *(unsigned int *)(v14 + 8 * v25 + 16) + 20) == 70129 )
          {
            v30 = v24;
          }
          else
          {
            v26 = *(unsigned int *)(v32 + 24);
            if ( (_DWORD)v26 == 0 )
              goto LABEL_28;
            v33 = a3;
            ++*(_DWORD *)(v14 + 8 * v26 + 4);
            v27 = *(unsigned int *)(v14 + 8 * v26 + 12);
            v28 = v14 + 8LL * *(unsigned int *)(v14 + 8 * v26 + 8);
            v31 = v14 + 8 * v26;
            v30 = v24;
            sub_57881C0(a1: v27, a2, a3: v31, a4: v24, a5: v24, a6: v28);
            a3 = v33;
          }
        }
        else
        {
          v30 = v14 + 8 * v23;
        }
        if ( *(int *)(v15 + 16) <= 0 )
          a3 = sub_277F280(a1, a2, a3);
        else
          a3 = *(_QWORD *)(a3 + 256);
      }
    }
    v19 = *(unsigned int *)(a3 + 24);
    v20 = v14 + 8 * v17;
    if ( (_DWORD)v19 != 0 )
    {
      v33 = *(_QWORD *)(v14 + 376178832);
      ++*(_DWORD *)(v14 + 8 * v19 + 4);
      v21 = *(unsigned int *)(v14 + 8 * v19 + 8);
      v22 = *(unsigned int *)(v14 + 8 * v19 + 12);
      v31 = v14 + 8 * v19;
      v30 = v20;
      sub_57881C0(a1: (unsigned int)v22, a2, a3: v31, a4: v22, a5: v20, a6: v14 + 8 * v21);
      result = v33;
      goto LABEL_8;
    }
LABEL_27:
    sub_2771080(
      a1,
      a2,
      a3,
      a4,
      a5: v20,
      a6: v19,
      a7: a5,
      a8: a6,
      a9: a7,
      a10: a8,
      a11: a9,
      a12: a10,
      a13: a11,
      a14: a12,
      a15: v29);
LABEL_28:
    sub_2771080(
      a1,
      a2,
      a3,
      a4: v24,
      a5: v26,
      a6: a14,
      a7: a5,
      a8: a6,
      a9: a7,
      a10: a8,
      a11: a9,
      a12: a10,
      a13: a11,
      a14: a12,
      a15: v29);
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
    return sub_277A040();
  }
  *(double *)a5.m128_u64 = sub_28C1C40(a1, a2, a3: v14 + 368616744);
  goto LABEL_27;
}
