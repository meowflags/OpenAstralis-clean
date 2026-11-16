// sub_2749C40
// rva 0x02749c40  size 230  section .text  group text
// window base 0x182749c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2749C40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, __int64, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 > *(_QWORD *)(v7 + 8) )
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0
        || (v10 = v6[2 * v9] >> 3,
            a2 = v6[2 * v10 + 11] & (0xE0Bu >> HIBYTE(v6[2 * v10 + 11])),
            (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2]) == 3595) )
      {
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 == 0
          || (v12 = v6[2 * v11] >> 3,
              a2 = (unsigned int)v6[2 * v12 + 11],
              a1 = (unsigned int)a2 & (0x15B2u >> HIBYTE(v6[2 * v12 + 11])),
              (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v12 + 5] + 3 + a1]) == 5554) )
        {
          a6(a1, a2, a3, a4, a5: &v6[2 * v9], a6: &v6[2 * v11]);
          if ( *(int *)(v7 + 16) <= 0 )
            sub_277F280(a1: v14, a2: v15, a3: v13);
          return (__int64)v6;
        }
      }
    }
    sub_2756FC0();
  }
  sub_1EB84E0();
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
  return sub_2749D40();
}
