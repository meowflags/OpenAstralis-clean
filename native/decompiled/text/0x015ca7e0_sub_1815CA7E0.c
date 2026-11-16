// sub_1815CA7E0
// rva 0x015ca7e0  size 158  section .text  group text
// window base 0x1815ca7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CA7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  int v18; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815CA880(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15, a7);
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v8 + 32) )
    {
      v18 = a5;
      v17 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 35862256);
      a5 = v18;
      a3 = v17;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 24;
      *(_DWORD *)result = 35862256;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_DWORD *)(result + 8) = a5;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v7) >> 3;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v18 = a5;
      v17 = a3;
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
