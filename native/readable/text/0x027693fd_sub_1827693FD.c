// sub_27693FD
// rva 0x027693fd  size 309  section .text  group text
// window base 0x1827693fd: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_27693FD()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[17]; // [rsp-160h] [rbp-160h] BYREF
  void *v5; // [rsp-D8h] [rbp-D8h]
  int v6; // [rsp-C8h] [rbp-C8h]
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  v2 = *(unsigned int *)(v1 + 272);
  *(_DWORD *)(v1 + 272) = 0;
  result = v0 + 8 * v2;
  if ( v6 == 0 )
    JUMPOUT(0x18276953CLL);
  if ( v4 == (_QWORD *)v4[16] )
    __asm { jmp     rsi }
  retaddr = v5;
  return result;
}
