// sub_181EC2BC0
// rva 0x01ec2bc0  size 96  section .text  group text
// window base 0x181ec2bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]
  int v13; // [rsp+24h] [rbp-4h]

  v12 = a3;
  v11 = a5;
  v13 = a6;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_6;
  }
  v8 = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)v8 == -1 )
  {
LABEL_6:
    MEMORY[0x184F6B980](a1: v8, a2, a3: a5);
    return sub_181EC2C20();
  }
  result = MEMORY[0x181E64480](a1: (unsigned int)a6, a2, a3: v6 + 376659136, a4, a5, a6: (unsigned int)v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
