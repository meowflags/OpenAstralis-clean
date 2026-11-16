// sub_181E9E380
// rva 0x01e9e380  size 294  section .text  group text
// window base 0x181e9e380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9E380(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+8h] [rbp-30h]
  __int64 v22; // [rsp+10h] [rbp-28h]
  unsigned __int64 v23; // [rsp+28h] [rbp-10h]
  unsigned __int64 v24; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = a3;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v20);
  }
  else if ( *(_DWORD *)(a3 + 8) != 0 )
  {
    v22 = a3;
    v21 = v6 + 376657072;
    v24 = (unsigned __int64)sub_181E9F600(a1, a2, a3: v6 + 376657072) >> 1;
    v23 = sub_181E9F520(a1: v8, a2: v9, a3: v21);
    v12 = sub_181E9F5C0(a1: v10, a2: v11, a3: v21);
    if ( v23 <= v24 )
    {
      if ( v12 >= v24 )
      {
        v23 = sub_181E9E4C0(a1: v14, a2: v15, a3: v22, a4: v13, a5: v24);
        sub_181E9F8A0(a1: v17, a2: v18, a3: v21, a4: v16, a5: v23);
        if ( v24 <= 2 * v23 )
          JUMPOUT(0x303D2844DLL);
        JUMPOUT(0x181E9E471LL);
      }
      JUMPOUT(0x303D283EELL);
    }
    JUMPOUT(0x303D283E7LL);
  }
  MEMORY[0x18276EFE0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return ((__int64 (*)(void))sub_181E9E4C0)();
}
