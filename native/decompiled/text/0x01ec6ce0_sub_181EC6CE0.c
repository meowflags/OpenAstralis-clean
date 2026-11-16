// sub_181EC6CE0
// rva 0x01ec6ce0  size 216  section .text  group text
// window base 0x181ec6ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC6CE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rbx
  __int64 v7; // rbp
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  _DWORD *v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v18);
  }
  else
  {
    if ( a3 == v8 )
      JUMPOUT(0x303D50CF8LL);
    if ( (_DWORD *)((char *)v8 + (*a3 & 0xFFFFFFF8)) != nullptr )
      JUMPOUT(0x303D50D0BLL);
    v6 = v8;
  }
  v10 = MEMORY[0x182771080]();
  v23 = v7;
  v22 = v6;
  v21 = v11;
  v20 = v10;
  v19 = v12;
  MEMORY[0x1828C1C40](a1: v13, a2: v8 + 92844558, a3: v8 + 92844558);
  MEMORY[0x18276FC00](a1: v15, a2: v16, a3: v6, a4: v14, a5: v8 + 8524030);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181EC6DC0();
}
