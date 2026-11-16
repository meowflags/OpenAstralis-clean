// sub_181E9CE80
// rva 0x01e9ce80  size 125  section .text  group text
// window base 0x181e9ce80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E9CE80(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  char v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a3;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v16);
  }
  else if ( *(_DWORD *)(a3 + 8) != 0 )
  {
    v18 = a3;
    v17 = v6 + 376657024;
    v19 = sub_181E9F5C0(a1, a2, a3: v6 + 376657024);
    v10 = sub_181E9F640(a1: v8, a2: v9, a3: v17);
    v14 = v19;
    if ( *(int *)(v7 + 16) <= 0 )
      v10 = MEMORY[0x18277F280](a1: v12, a2: v13, a3: v11, a4: v19);
    return (v14 - 2 * v10) & 0xFFFFFFFFFFF80000LL;
  }
  MEMORY[0x18276EFE0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181E9CF00();
}
