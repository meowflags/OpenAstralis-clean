// sub_184F3D160
// rva 0x04f3d160  size 78  section .text  group text
// window base 0x184f3d160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3D160(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( *(_BYTE *)(v6 + 376360058) == 0 )
  {
    v10 = a3;
    goto LABEL_4;
  }
  v10 = a3;
  MEMORY[0x1815ACE20](a1, a2, a3: v6 + 34100448);
LABEL_4:
  result = sub_184F3E5A0(a1, a2, a3, a4, a5, a6, a7: v9);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
