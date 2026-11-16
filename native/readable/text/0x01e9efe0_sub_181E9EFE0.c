// sub_1E9EFE0
// rva 0x01e9efe0  size 424  section .text  group text
// window base 0x181e9efe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9EFE0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 result; // rax
  double v18; // xmm0_8
  char v19; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-20h]
  char *v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+1Ch] [rbp-Ch]
  char *v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v19);
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
    return sub_1E9F1A0(a1: v18);
  }
  else
  {
    v8 = *((unsigned int *)v6 + 93624753);
    *((_DWORD *)v6 + 93624753) = 0;
    v9 = (unsigned __int64)&v6[8 * v8];
    if ( (_DWORD)v8 != 0 )
    {
      v10 = *(unsigned int *)&v6[8 * v8 + 8];
      if ( (_DWORD)v10 == (_DWORD)v8 )
        v23 = v6;
      else
        v23 = &v6[8 * v10];
      v22 = v8;
      v21 = &v6[8 * v8];
      if ( (unsigned int)sub_1E9EC20(a1, a2, a3: (unsigned __int64)v21, a4: v9, a5, a6) != 0 )
      {
        v13 = v22;
      }
      else
      {
        v13 = v22;
        if ( *(_DWORD *)&v6[8 * v22 + 12] != 47082141 )
        {
          v9 = (unsigned __int64)v21;
          *(_DWORD *)&v6[8 * v22 + 8] = 0;
          goto LABEL_8;
        }
      }
      *(_DWORD *)&v6[8 * v13 + 8] = 0;
      v9 = (unsigned __int64)v6;
LABEL_8:
      v14 = (unsigned __int64)v23;
      v23 = (char *)v9;
      while ( 1 )
      {
        if ( (char *)v14 == v6 )
        {
          result = (__int64)v23;
          goto LABEL_26;
        }
        v21 = &v6[8 * *(unsigned int *)(v14 + 8)] == (char *)v14 ? v6 : &v6[8 * *(unsigned int *)(v14 + 8)];
        v20 = (_DWORD *)v14;
        if ( (unsigned int)sub_1E9EC20(a1, a2, a3: v14, a4: v9, a5: v11, a6: v12) != 0 )
          break;
        v15 = (unsigned __int64)v20;
        if ( v20[3] == 47082141 )
        {
LABEL_14:
          *(_DWORD *)(v15 + 8) = 0;
          v14 = (unsigned __int64)v21;
        }
        else
        {
          v20[2] = (unsigned __int64)(v23 - v6) >> 3;
          if ( (*(_DWORD *)v15 & 2) != 0 )
          {
            if ( (char *)v15 == v6 )
              JUMPOUT(0x303D290ECLL);
            v9 = v15 & 0xFFFFFFFFFFF80000LL;
            v16 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v16) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v16) >> 9) + 0x38) = 0;
            v23 = (char *)v15;
            v14 = (unsigned __int64)v21;
          }
          else
          {
            v23 = (char *)v15;
            v14 = (unsigned __int64)v21;
          }
        }
      }
      v15 = (unsigned __int64)v20;
      goto LABEL_14;
    }
    v14 = (unsigned __int64)&v6[8 * v8];
    result = (__int64)v6;
LABEL_26:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1, a2, a3: v14, a4: v9);
  }
  return result;
}
