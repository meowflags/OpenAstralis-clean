// sub_182773900
// rva 0x02773900  size 134  section .text  group text
// window base 0x182773900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773900(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+18h] [rbp-20h]
  __int64 v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  __int64 v19; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v14 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB83C0]();
    JUMPOUT(0x182773986LL);
  }
  v19 = a1;
  v18 = a6;
  v16 = a3;
  v15 = a5;
  v17 = a2;
  v14[1] = a4;
  sub_182773F00(a1: a8, a2: 0, a3: a5, a4, a5: a2, a6: a4);
  result = sub_1827736E0(a1: v19, a2: v17, a3: v16, a4: v9, a5: v15, a6: v18);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v12, a2: v13, a3: v11);
  return result;
}
