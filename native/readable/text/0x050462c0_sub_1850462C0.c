// sub_50462C0
// rva 0x050462c0  size 285  section .text  group text
// window base 0x1850462c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50462C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]
  int v12; // [rsp+1Ch] [rbp-Ch]
  __int64 v13; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_50463E0();
  }
  else
  {
    result = 5;
    if ( a5 != 0 )
      JUMPOUT(0x30A0612DELL);
    *(_DWORD *)(a3 + 136) = 5;
    __faststorefence();
    if ( *(_BYTE *)(a3 + 102) != 0 )
    {
      v13 = a6;
      v12 = 0;
      v9 = a3;
    }
    else
    {
      v13 = a6;
      v12 = 0;
      v11 = a3;
      result = sub_6119F60(a1, a2, a3: v6 + 375388656, a4: 5, a5: 0, a6: 0);
      v9 = v11;
    }
    *(_DWORD *)(v9 + 136) = 2;
    __faststorefence();
    if ( *(_BYTE *)(v9 + 102) != 0 )
    {
      *(_BYTE *)(v9 + 102) = 0;
      __faststorefence();
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
