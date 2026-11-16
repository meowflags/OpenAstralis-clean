// sub_18274FC80
// rva 0x0274fc80  size 245  section .text  group text
// window base 0x18274fc80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274FC80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, __int64, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
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
    return sub_18274FD80();
  }
  else
  {
    if ( a5 != v7 && a5[2] == 3 )
    {
      v10 = (unsigned int)a5[3];
      if ( (_DWORD)v10 == 0 || (_DWORD)(a4 = v7[2 * v10] >> 3) == 4745680 )
      {
        v6 = (unsigned int)a5[4];
        if ( (_DWORD)v6 == 0 )
          goto LABEL_9;
        v11 = v7[2 * v6] >> 3;
        if ( SHIWORD(v7[2 * v11 + 15]) >= 2 )
        {
          a4 = (unsigned int)v7[2 * v11 + 4];
          if ( v7[2 * a4 + 4] == 8984 )
            goto LABEL_9;
        }
      }
    }
    do
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *, _DWORD *))sub_182757000(
                                                                                              a1,
                                                                                              a2,
                                                                                              a3: a5);
LABEL_9:
      v12 = (unsigned int)a5[5];
      if ( (_DWORD)v12 == 0 )
        break;
      v13 = v7[2 * v12] >> 3;
      a2 = (unsigned int)v7[2 * v13 + 11];
      a1 = (unsigned int)a2 & (0x2364u >> HIBYTE(v7[2 * v13 + 11]));
      a4 = (unsigned __int16)v7[2 * (unsigned int)v7[2 * v13 + 5] + 3 + a1];
    }
    while ( (_DWORD)a4 != 9060 );
    result = a6(a1, a2, a3: &v7[2 * v10], a4, a5: &v7[2 * v6], a6: &v7[2 * v12]);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_18277F280(a1: v16, a2: v17, a3: v15);
  }
  return result;
}
