// sub_184F24BE0
// rva 0x04f24be0  size 230  section .text  group text
// window base 0x184f24be0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24BE0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rsi
  signed __int64 v20; // rax
  int v21; // edi
  int v22; // esi
  int v23; // r9d
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+Ch] [rbp-2Ch]
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+28h] [rbp-10h]
  unsigned int v29; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v14 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F24CE0();
  }
  else
  {
    if ( a5 < 1 )
      JUMPOUT(0x184F24C90LL);
    v29 = a5;
    v26 = *a3 >> 3;
    v15 = *(_QWORD *)(v13 + 8LL * v26 + 120);
    v27 = a3;
    v16 = ((__int64 (*)(void))(v12 + v15))();
    v17 = *(_QWORD *)(v13 + 8LL * v26 + 128);
    v28 = v16;
    v20 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + v17))(a1: v18, a2: v19, a3: v27);
    if ( v20 < v28 + v29 )
      JUMPOUT(0x309E3AC61LL);
    return sub_184F24C69(
             a1: v21,
             a2: v22,
             a3: (_DWORD)v27,
             a4: (int)v12 + *(_DWORD *)(v13 + 8LL * v26 + 160),
             a5: (unsigned int)v28 + v29,
             a6: v23,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  }
}
