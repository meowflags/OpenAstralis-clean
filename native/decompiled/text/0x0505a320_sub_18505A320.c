// sub_18505A320
// rva 0x0505a320  size 262  section .text  group text
// window base 0x18505a320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505A320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_12:
    MEMORY[0x182771080]();
    goto LABEL_13;
  }
  if ( a5 != v5 )
  {
    v8 = (unsigned __int16)v5[2 * v5[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v5[2 * (*a5 >> 3) + 11] & (0x16D9u >> HIBYTE(v5[2 * (*a5 >> 3) + 11])))];
    if ( (_DWORD)v8 != 5849 )
      goto LABEL_14;
  }
  if ( a5 == v5 )
    goto LABEL_12;
  v9 = *a5 >> 3;
  if ( (_DWORD)v9 != 5414493 )
  {
LABEL_13:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: v9, a5: v5 + 10829048);
LABEL_14:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: v8, a5: v5 + 10829048);
LABEL_15:
    MEMORY[0x18276FC00](a1, a2, a3: v11, a4: v13, a5: v5 + 10829066);
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
    return sub_18505A440();
  }
  v10 = (unsigned int)a5[4];
  v11 = &v5[2 * v10];
  if ( (_DWORD)v10 != 0 )
  {
    v12 = v5[2 * v10] >> 3;
    a2 = v5[2 * v12 + 11] & (0x1ED7u >> HIBYTE(v5[2 * v12 + 11]));
    v13 = (unsigned __int16)v5[2 * (unsigned int)v5[2 * v12 + 5] + 3 + a2];
    if ( (_DWORD)v13 != 7895 )
      goto LABEL_15;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v11);
  return (__int64)v11;
}
