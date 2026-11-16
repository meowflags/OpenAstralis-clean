// sub_181ED5E80
// rva 0x01ed5e80  size 128  section .text  group text
// window base 0x181ed5e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED5E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
  }
  else if ( a3 != v6 )
  {
    v8 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v8 != 0 )
    {
      v11 = a3;
      v12 = a5;
      result = sub_181ED57E0(a1, a2, a3: v6 + 8 * v8, a4, i: a5, a6);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    else
    {
      v12 = a5;
      v11 = a3;
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v6;
    }
    return result;
  }
  MEMORY[0x182771080]();
  JUMPOUT(0x181ED5F00LL);
}
