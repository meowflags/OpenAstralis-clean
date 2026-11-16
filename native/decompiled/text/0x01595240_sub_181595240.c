// sub_181595240
// rva 0x01595240  size 400  section .text  group text
// window base 0x181595240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181595240(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_27;
  }
  MEMORY[0x18283B380](a1, a2, a3: v3 + 94153156);
  v8 = v3[94153166];
  if ( (_DWORD)v8 == 47076562 )
    v9 = (__int64)(v3 + 8781820);
  else
    v9 = (__int64)&v3[2 * v8];
  if ( (unsigned int *)v9 != v3 )
  {
    v5 = *(_DWORD *)v9 >> 3;
    if ( (_DWORD)v5 != 4261917 )
      goto LABEL_28;
  }
  if ( (unsigned int *)v9 == v3 )
  {
LABEL_27:
    v9 = MEMORY[0x182771080]();
LABEL_28:
    MEMORY[0x18276FC00](a1: v6, a2: v7, a3: v9, a4: v5, a5: v3 + 8523834);
    goto LABEL_29;
  }
  if ( *(_BYTE *)(v9 + 4) != 0 )
  {
    sub_1815953E0();
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0;
  }
  v11 = v3[94153174];
  if ( (_DWORD)v11 == 47076562 )
    v12 = v3 + 8781820;
  else
    v12 = &v3[2 * v11];
  if ( v12 != v3 && *v12 >> 3 != 4261917 )
    goto LABEL_30;
  if ( v12 == v3 )
  {
LABEL_29:
    MEMORY[0x182771080]();
LABEL_30:
    MEMORY[0x18276FC00](a1: v6, a2: v7, a3: v12, a4: v5, a5: v3 + 8523834);
    goto LABEL_31;
  }
  if ( *((_BYTE *)v12 + 4) != 0 )
  {
    v13 = v3[93585968];
    if ( (_DWORD)v13 != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, unsigned int *, __int64, unsigned int *))(v2
                                                                                      + *(_QWORD *)&v3[2 * (v3[2 * v13] >> 3) + 112]))(
        a1: v6,
        a2: v7,
        a3: &v3[2 * v13],
        a4: v5,
        a5: v3 + 14417258);
      if ( *(int *)(v4 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 1;
    }
LABEL_31:
    MEMORY[0x182771080]();
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
    return sub_1815953E0();
  }
  v14 = MEMORY[0x1820722C0](a1: v6, a2: v7, a3: v3 + 94087988);
  MEMORY[0x18206B9E0](a1: v15, a2: v16, a3: v14);
  if ( *(int *)(v4 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 2;
}
