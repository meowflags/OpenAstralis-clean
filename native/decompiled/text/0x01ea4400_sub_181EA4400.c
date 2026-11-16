// sub_181EA4400
// rva 0x01ea4400  size 341  section .text  group text
// window base 0x181ea4400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA4400(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-38h]
  __int64 v19; // [rsp+20h] [rbp-18h]

  if ( *(int *)(v8 + 336) < 2 )
  {
    MEMORY[0x1828C1C40](a1, a2, a3: v7 + 368047032);
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
    return sub_181EA4560();
  }
  else
  {
    v9 = *(unsigned int *)(v7 + 376351692);
    if ( (_DWORD)v9 != 0 )
    {
      v10 = ((unsigned int (__fastcall *)(__int64, __int64, __int64))(v6
                                                                    + *(_QWORD *)(v7
                                                                                + 8LL * (*(_DWORD *)(v7 + 8 * v9) >> 3)
                                                                                + 136)))(
              a1,
              a2,
              a3: v7 + 8 * v9);
      v11 = a3;
    }
    else
    {
      v10 = 0;
      v11 = a3;
    }
    sub_181EA4340(a1, a2, a3: v11, a4: v10, a5: v10, a6);
    result = a3[6];
    a3[6] = 0;
    if ( result != 0 )
    {
      v16 = *(_QWORD *)(result + 16);
      if ( v16 != 0 )
        v19 = result + v16;
      else
        v19 = 0;
      while ( 1 )
      {
        *(_QWORD *)(result + 16) = 0;
        sub_181E9FBC0(a1: v12, a2: v13, a3: v7 + 376653960, a4: v7 + 376653960, a5: result, a6: v14, a7: v18);
        result = v19;
        if ( v19 == 0 )
          break;
        v17 = *(_QWORD *)(v19 + 16);
        if ( v17 != 0 )
          v19 += v17;
        else
          v19 = 0;
      }
    }
  }
  return result;
}
