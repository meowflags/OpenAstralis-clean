// sub_185021B40
// rva 0x05021b40  size 230  section .text  group text
// window base 0x185021b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185021B40(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+18h] [rbp-10h]
  int v20; // [rsp+20h] [rbp-8h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
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
    return sub_185021C40();
  }
  else
  {
    v21 = a6;
    if ( (_DWORD)a6 != 0 )
    {
      v19 = a3;
      v20 = a5;
      v10 = sub_18501E2C0(a1, a2, a3, a4: (unsigned int)a5, a5, a6);
      v15 = *(_QWORD *)(v9 + 40);
      v16 = v15 + 24;
      if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v9 + 32) )
      {
        return sub_185021BF5(a1: v11, a2: v12, a3: v15, a4: v16, a5: v13, a6: v14, a7, a8);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v16;
        *(_DWORD *)v15 = 34082680;
        *(_DWORD *)(v15 + 4) = 0;
        *(_QWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 16) = 0;
        *(_BYTE *)(v15 + 12) = v21 - *(_DWORD *)(v10 + 8) < 0;
        *(_DWORD *)(v15 + 4) = (unsigned __int64)(v10 - v8) >> 3;
        if ( *(int *)(v9 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return v15;
      }
    }
    else
    {
      v20 = a5;
      v19 = a3;
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v8 + 373281248;
    }
  }
}
