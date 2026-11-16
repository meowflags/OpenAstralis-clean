// sub_1815CC060
// rva 0x015cc060  size 205  section .text  group text
// window base 0x1815cc060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CC060(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+14h] [rbp-14h]
  int v10; // [rsp+18h] [rbp-10h]
  int v11; // [rsp+1Ch] [rbp-Ch]
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    return sub_1815CC140();
  }
  else
  {
    result = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(result + 32) > *(_QWORD *)(v6 + 32) )
    {
      v13 = a2;
      v12 = a1;
      v11 = a6;
      v10 = a5;
      v9 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35309304);
      LODWORD(a2) = v13;
      LODWORD(a1) = v12;
      a6 = v11;
      a5 = v10;
      a3 = v9;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = result + 32;
      *(_DWORD *)result = 35309304;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
    }
    *(_DWORD *)(result + 20) = a2;
    *(_DWORD *)(result + 16) = a1;
    *(_DWORD *)(result + 12) = a6;
    *(_DWORD *)(result + 8) = a5;
    *(_DWORD *)(result + 4) = a3;
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v13 = a2;
      v12 = a1;
      v11 = a6;
      v10 = a5;
      v9 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
