// sub_182761AE0
// rva 0x02761ae0  size 404  section .text  group text
// window base 0x182761ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // rbp
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_31;
  }
  v18 = a3;
  v17 = a5;
  v16 = a6;
  if ( *(_BYTE *)(a3 + 16) != 0 )
  {
LABEL_31:
    v13 = v6 + 373281248;
    if ( a6 == v6 )
      goto LABEL_35;
    v14 = v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12);
    goto LABEL_33;
  }
  if ( a6 == v6 )
  {
    while ( 1 )
    {
      v13 = sub_18275BEC0(a1, a2, a3, a4, a5: v6 + 373281248, a6: v6 + 373281248, a7: v15);
LABEL_35:
      v14 = v13;
LABEL_33:
      sub_18275BDA0(a1, a2, a3: v18, a4: v14, a5: v14, a6: v13, a7: v15);
    }
  }
  v8 = *(unsigned int *)(a3 + 20);
  v9 = *(_DWORD **)(a3 + 8);
  v10 = v6 + 8 * v8;
  v11 = *(_DWORD *)a6 >> 3;
  switch ( v11 )
  {
    case 4288437:
      result = (unsigned int)*(char *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(_DWORD *)((char *)v9 + v10) = result;
      else
        *v9 = result;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 4288459:
      result = (unsigned int)*(__int16 *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(_DWORD *)((char *)v9 + v10) = result;
      else
        *v9 = result;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 4288481:
      result = *(unsigned __int16 *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(_DWORD *)((char *)v9 + v10) = result;
      else
        *v9 = result;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    default:
      break;
  }
  if ( v11 != 4260808 )
  {
    sub_18275BEC0(
      a1,
      a2,
      a3,
      a4: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a6: v6 + 373281248,
      a7: v15);
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
    return sub_182761C80();
  }
  result = *(unsigned int *)(a6 + 4);
  if ( (_DWORD)v8 != 0 )
    *(_DWORD *)((char *)v9 + v10) = result;
  else
    *v9 = result;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3);
  return result;
}
