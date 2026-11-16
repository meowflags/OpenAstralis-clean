// sub_1EC2C20
// rva 0x01ec2c20  size 127  section .text  group text
// window base 0x181ec2c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC2C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  unsigned int v16; // [rsp+1Ch] [rbp-Ch]
  int v17; // [rsp+20h] [rbp-8h]
  unsigned int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
    __builtin_debugtrap();
    return sub_1EC2CA0();
  }
  else
  {
    v18 = a6;
    v15 = a5;
    v17 = a3;
    v8 = sub_1EC2F20(a1, a2, a3, a4, a5: 4, a6: -1, a7: v14);
    if ( v8 == -1 )
    {
      v16 = 0xFFFFFFFF;
      result = v6 + 376659152;
    }
    else
    {
      v16 = v8;
      result = sub_1E63B00(a1: v18, a2: 0, a3: v6 + 376659136, a4: v10, a5: v15, a6: v8);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v11, a2: v12, a3: v9, a4: v16);
  }
  return result;
}
