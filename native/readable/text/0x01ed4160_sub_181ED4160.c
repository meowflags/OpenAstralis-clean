// sub_1ED4160
// rva 0x01ed4160  size 402  section .text  group text
// window base 0x181ed4160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED4160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *result; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  char v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v16);
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
    return (_DWORD *)sub_1ED4300();
  }
  else
  {
    v18 = a5;
    result = (_DWORD *)sub_1ED4E60(a1, a2, a3: (int)v7 + 376659936, a4: v18, a5: a3, a6: v18, a7: v16);
    if ( result == v7 || *result >> 3 != 4262015 )
    {
      if ( result == v7
        || (v13 = *result >> 3, SHIWORD(v7[2 * v13 + 15]) < 5)
        || v7[2 * v7[2 * v13 + 4] + 7] != 88010
        || result == v7 )
      {
        v14 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v14 = sub_1EAA920(a1: v11, a2: v12, a3: 36450760);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v14 + 40;
          *(_DWORD *)v14 = 36450760;
          *(_DWORD *)(v14 + 4) = 0;
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 32) = 0;
        }
        *(_DWORD *)(v14 + 20) = 46923644;
        *(_DWORD *)(v14 + 16) = v7[93585974];
        *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - (_QWORD)v7) >> 3;
        v17 = (_DWORD *)v14;
        sub_503B9A0(a1: v11, a2: v12, a3: v14, a4: v14, a5: 0);
        v15 = (unsigned __int64)v17;
        v17[2] = (unsigned __int64)(v19 - (_QWORD)v7) >> 3;
        if ( (*(_DWORD *)v15 & 2) != 0 )
        {
          v10 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v10) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v10) >> 9) + 0x38) = 0;
        }
        *(_DWORD *)(v15 + 12) = 0;
        result = (_DWORD *)v15;
      }
      result = (_DWORD *)sub_2769900(a1: v11, a2: v12, a3: result, a4: v10, a5: &a7);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
  }
  return result;
}
