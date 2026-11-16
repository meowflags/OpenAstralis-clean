// sub_18502FD20
// rva 0x0502fd20  size 109  section .text  group text
// window base 0x18502fd20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502FD20(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v5 = *(unsigned int *)(v4 + 72);
  if ( (_DWORD)v5 != 0 )
    goto LABEL_4;
  do
  {
    MEMORY[0x182771080]();
LABEL_4:
    v6 = (unsigned int)v3[2 * v5 + 18];
    if ( (_DWORD)v6 != 0 )
      v7 = &v3[2 * v6];
    else
      v7 = &v3[2 * v5];
  }
  while ( v7 == v3 );
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v2 + *(_QWORD *)&v3[2 * (*v7 >> 3) + 42]))(
             a1,
             a2,
             a3: v7);
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
