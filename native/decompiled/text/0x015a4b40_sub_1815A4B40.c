// sub_1815A4B40
// rva 0x015a4b40  size 221  section .text  group text
// window base 0x1815a4b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A4B40(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A4C20(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 28);
    v10 = v7 + 8 * v9;
    if ( (_DWORD)v9 != 0 )
    {
      result = v7 + 8 * v9;
    }
    else
    {
      result = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
      {
        v20 = v10;
        v19 = (_DWORD *)a3;
        result = MEMORY[0x181EAA920](a1, a2, a3: 35799920);
        v10 = v20;
        a3 = (unsigned __int64)v19;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = result + 16;
        *(_DWORD *)result = 35799920;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_DWORD *)(result + 4) = (a3 - v7) >> 3;
      *(_DWORD *)(a3 + 28) = (unsigned __int64)(result - v7) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v19 = (_DWORD *)a3;
      return MEMORY[0x18277F280](a1, a2, a3, a4: v10);
    }
  }
  return result;
}
