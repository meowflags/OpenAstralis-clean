// sub_181E9A3E0
// rva 0x01e9a3e0  size 173  section .text  group text
// window base 0x181e9a3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9A3E0(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v10; // rdx
  __int64 result; // rax
  int v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+18h] [rbp-20h]
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v12);
    JUMPOUT(0x181E9A48DLL);
  }
  v8 = *(_QWORD *)(a5 + 32);
  v10 = v6 + 8LL * *(unsigned int *)(a3 + 4);
  v16 = a5 + v8 - ((((v8 - 56) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL);
  v13 = a3;
  v15 = v8 + a5;
  v14 = a5;
  result = sub_181E98AE0(a1: v15, a2: v15, a3: v10, a4: 0, a5, a6: v16, a7: v12, a8: v6 + 370033864, a9: 0);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v16);
  return result;
}
