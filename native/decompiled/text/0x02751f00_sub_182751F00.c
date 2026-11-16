// sub_182751F00
// rva 0x02751f00  size 235  section .text  group text
// window base 0x182751f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182751F00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 > *(_QWORD *)(v7 + 8) )
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 || (_DWORD)(a4 = v6[2 * v9] >> 3) == 4284894 )
      {
        v10 = (unsigned int)a5[4];
        if ( (_DWORD)v10 == 0 || (_DWORD)(a4 = v6[2 * v10] >> 3) == 4284976 )
        {
          v11 = (unsigned int)a5[5];
          if ( (_DWORD)v11 == 0
            || (v12 = v6[2 * v11] >> 3,
                a2 = (unsigned int)v6[2 * v12 + 11],
                a1 = (unsigned int)a2 & (0x632u >> HIBYTE(v6[2 * v12 + 11])),
                (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v12 + 5] + 3 + a1]) == 1586) )
          {
            a6(a1, a2, a3: &v6[2 * v9], a4, a5: &v6[2 * v10], a6: &v6[2 * v11]);
            if ( *(int *)(v7 + 16) <= 0 )
              sub_18277F280(a1: v14, a2: v15, a3: v13);
            return (__int64)v6;
          }
        }
      }
    }
    sub_182757000(a1, a2, a3: a5);
  }
  MEMORY[0x181EB84E0]();
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
  return sub_182752000();
}
