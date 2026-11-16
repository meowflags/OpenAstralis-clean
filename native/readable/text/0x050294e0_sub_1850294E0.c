// sub_50294E0
// rva 0x050294e0  size 87  section .text  group text
// window base 0x1850294e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50294E0()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v1 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v2 = *(unsigned int *)(v1 + 72);
  if ( (_DWORD)v2 != 0 )
    goto LABEL_4;
  do
  {
    v2 = sub_2771080();
LABEL_4:
    v3 = *(unsigned int *)(v0 + 8 * v2 + 72);
    if ( (_DWORD)v3 != 0 )
      v4 = v0 + 8 * v3;
    else
      v4 = v0 + 8 * v2;
  }
  while ( v4 == v0 );
  if ( *(int *)(v1 + 16) <= 0 )
    sub_277F280();
  return v0 + 8LL * *(unsigned int *)(v4 + 24);
}
