// sub_1850296C0
// rva 0x050296c0  size 143  section .text  group text
// window base 0x1850296c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1850296C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  int v12; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v7 = *(unsigned int *)(v6 + 72);
  if ( (_DWORD)v7 != 0 )
    goto LABEL_4;
  do
  {
    v7 = MEMORY[0x182771080]();
LABEL_4:
    v8 = *(unsigned int *)(v5 + 8 * v7 + 72);
    if ( (_DWORD)v8 != 0 )
      v9 = v5 + 8 * v8;
    else
      v9 = v5 + 8 * v7;
  }
  while ( v9 == v5 );
  *(_DWORD *)(v9 + 52) = (unsigned __int64)(a5 - v5) >> 3;
  __faststorefence();
  result = *(unsigned int *)v9;
  if ( (result & 2) != 0 )
  {
    result = v9 & 0xFFFFFFFFFFF80000LL;
    v11 = (v9 - ((v9 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(result + v11 + 56) != 0 )
      *(_BYTE *)(result + v11 + 56) = 0;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
