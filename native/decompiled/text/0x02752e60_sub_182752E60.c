// sub_182752E60
// rva 0x02752e60  size 262  section .text  group text
// window base 0x182752e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182752E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 > *(_QWORD *)(v7 + 8) )
  {
    if ( a5 != v6 && a5[2] == 3 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0
        || (v10 = v6[2 * v9] >> 3,
            (_DWORD)(a4 = (unsigned __int16)v6[2 * v6[2 * v10 + 5]
                                             + 3
                                             + (v6[2 * v10 + 11] & (0x18C7u >> HIBYTE(v6[2 * v10 + 11])))]) == 6343) )
      {
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 == 0 || (_DWORD)(a4 = v6[2 * v11] >> 3) == 5039835 )
        {
          v12 = (unsigned int)a5[5];
          if ( (_DWORD)v12 == 0
            || (v13 = v6[2 * v12] >> 3,
                a2 = (unsigned int)v6[2 * v13 + 11],
                a1 = (unsigned int)a2 & (0x136u >> HIBYTE(v6[2 * v13 + 11])),
                (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v13 + 5] + 3 + a1]) == 310) )
          {
            result = a6(a1, a2, a3: &v6[2 * v9], a4, a5: &v6[2 * v11], a6: &v6[2 * v12]);
            if ( *(int *)(v7 + 16) <= 0 )
              return sub_18277F280(a1: v16, a2: v17, a3: v15);
            return result;
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182752F80();
}
